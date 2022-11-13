from bs4 import BeautifulSoup
from typing import *
import requests
import time
import os


# 配置
USER_ID = '' # 账号
PASSWORD = '' # 密码
LANGUAGE_ID = 1 # 编程语言
SOLUTIONS_DIR = r'./solutions' # 存放答案的文件夹
USER_AGENT = 'Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/107.0.0.0 Safari/537.36 Edg/107.0.1418.42'


class ContestInfo(object):
    def __init__(self, jsonDict) -> None:
        self.id: int = jsonDict['id']
        self.title: str = jsonDict['title']


class ProblemInfo(object):
    def __init__(self, jsonDict, contestId) -> None:
        self.id: int = jsonDict['id']
        self.title: str = jsonDict['title']
        self.solutionType: int = jsonDict['solutionType']
        self.accepted: bool = (jsonDict['userAcceptCount'] > 0)
        self.contestId: int = contestId


def login(session: requests.Session) -> None:
    session.post('http://39.98.193.72/xdoj-ssm/user/login.do', data={
        'userId': USER_ID,
        'password': PASSWORD
    }, headers={
        'Referer': 'http://39.98.193.72/xdoj-ssm/login.jsp',
        'User-Agent': USER_AGENT
    }, allow_redirects=False)


def getContests(session: requests.Session) -> List[ContestInfo]:
    contests = []
    nowTime = time.time()
    pageCount = 10
    pageNum = 1

    while pageNum <= pageCount:
        response = session.post('http://39.98.193.72/xdoj-ssm/contest/list.do', data={
            '_search': False,
            'nd': round(time.time() * 1000), # 毫秒级时间戳
            'rows': 10,
            'page': pageNum,
            'sidx': None,
            'sord': 'asc'
        }, headers={
            'Accept': 'application/json, text/javascript, */*; q=0.01',
            'Referer': 'http://39.98.193.72/xdoj-ssm/team/contests.do',
            'User-Agent': USER_AGENT
        })

        data = response.json()

        for c in data['data']:
            active = c['active']
            startTime = time.mktime(time.strptime(c['startTime'], '%Y-%m-%d %H:%M:%S'))
            endTime = time.mktime(time.strptime(c['endTime'], '%Y-%m-%d %H:%M:%S'))

            # 选择还可以提交的 contest
            if active and startTime <= nowTime and endTime >= nowTime:
                contests.append(ContestInfo(c))

        pageCount = data['totalpages']
        pageNum += 1

        response.close()

    return contests


def selectContest(session: requests.Session, contestId: int) -> None:
    session.post('http://39.98.193.72/xdoj-ssm/team/selectContest.do', data={
        'contestId': contestId
    }, headers= {
        'Referer': 'http://39.98.193.72/xdoj-ssm/team/contests.do',
        'User-Agent': USER_AGENT
    })


def getProblems(session: requests.Session, contestId: int) -> List[ProblemInfo]:
    problems = []
    pageCount = 10
    pageNum = 1

    while pageNum <= pageCount:
        response = session.get('http://39.98.193.72/xdoj-ssm/contest/problems.do', params={
            'contestId': contestId,
            'userId': USER_ID,
            '_search': False,
            'nd': round(time.time() * 1000), # 毫秒级时间戳
            'rows': 10,
            'page': pageNum,
            'sidx': None,
            'sord': 'asc'
        }, headers={
            'Accept': 'application/json, text/javascript, */*; q=0.01',
            'Referer': 'http://39.98.193.72/xdoj-ssm/team/problems.do',
            'User-Agent': USER_AGENT
        })

        data = response.json()

        for p in data['data']:
            problem = ProblemInfo(p, contestId)

            if len(problem.title) > 0: # 标题为空的都是无效题目
                problems.append(problem)

        pageCount = data['totalpages']
        pageNum += 1

        response.close()

    return problems


def getClassId(session: requests.Session) -> str:
    response = session.post('http://39.98.193.72/xdoj-ssm/team/submit.do', headers={
        'Referer': 'http://39.98.193.72/xdoj-ssm/team/problems.do',
        'User-Agent': USER_AGENT
    })

    return BeautifulSoup(response.text, 'html.parser').find('input', id='classId')['value']


def submitCode(problem: ProblemInfo, classId: str, filePath: str = ..., sourceCode: str = ...) -> None:
    session.post('http://39.98.193.72/xdoj-ssm/submission/submit.do', data={
        'solutionType': problem.solutionType,
        'contestId': problem.contestId,
        'userId': USER_ID,
        'classId': classId,
        'problemId': problem.id,
        'languageId': LANGUAGE_ID,
        'sourceCode': (sourceCode if isinstance(sourceCode, str) else None)
    }, headers={
        'Referer': 'http://39.98.193.72/xdoj-ssm/team/submit.do',
        'User-Agent': USER_AGENT
    }, files={
        'sourceFile': ('solution.cpp', open(filePath, 'rb'), 'text/plain') if isinstance(filePath, str) else None
    })


if __name__ == '__main__':
    if len(USER_ID) == 0 or len(PASSWORD) == 0:
        print("Forget to set the configs in unloader.py?")
        exit(-1)

    with requests.Session() as session:
        login(session)

        contests = getContests(session)

        print('Available contests:')
        for i in range(len(contests)):
            print('  {0}.{1}'.format(i + 1, contests[i].title))

        num = int(input('Select one (enter the number): '))
        contest = contests[num - 1]
        selectContest(session, contest.id)
        problems = getProblems(session, contest.id)
        classId = getClassId(session)

        for p in problems:
            print('-----------------------------------------------------------')

            if p.accepted:
                print('Problem "{0}" has already been accepted.'.format(p.title))
                continue

            if p.solutionType not in (0, 1):
                print('Unknown solutionType value "{0}" of problem {1}.'.format(p.solutionType, p.title))
                continue

            codeFilePath = os.path.join(SOLUTIONS_DIR, str(p.id) + '.cpp')

            if os.path.exists(codeFilePath):
                if p.solutionType == 0: # 提交文件
                    submitCode(p, classId, filePath=codeFilePath)
                elif p.solutionType == 1: # 提交代码片段
                    with open(codeFilePath, 'r') as fp:
                        submitCode(p, classId, sourceCode=fp.read())

                print('Submit problem "{0}".'.format(p.title))
                time.sleep(1)
            else:
                print('No codes for problem "{0}".'.format(p.title))
