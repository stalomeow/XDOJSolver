import json
import os

CONFIG_DIR = r'./generator_configs'
OUTPUT_DIR = r'./solutions'

if __name__ == '__main__':
    for filepath, dirnames, filenames in os.walk(CONFIG_DIR):
        for filename in filenames:
            config = None

            with open(os.path.join(filepath, filename), 'r', encoding='utf-8') as fp:
                config = json.load(fp)

            for problem in config:
                outputFile = os.path.join(OUTPUT_DIR, problem['id'] + '.cpp')

                with open(outputFile, 'w+') as fp:
                    fp.write(problem['text'])

                print('Generate {0}.'.format(outputFile))