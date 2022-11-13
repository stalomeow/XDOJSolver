const result = [];

function validTextContent(textContent) {
    // replace &nbsp;
    return textContent.replace(/[\xa0\xA0\u00a0\u00A0]/g, ' ');
}

function dfsGetText(node, textList) {
    const childNodes = node.childNodes;

    if (childNodes.length === 0) {
        textList.push((node.tagName.toLowerCase() === 'br')
            ? '\n' : validTextContent(node.textContent));
        return;
    }

    for (let i = 0; i < childNodes.length; i++){
        const child = childNodes[i];
        const childType = child.nodeType;

        if (childType === 1) {
            dfsGetText(child, textList);
        } else if (childType === 3) {
            textList.push(validTextContent(child.textContent));
        }
    }
}

document.querySelectorAll('code').forEach(c => {
    const idMatch = c.parentElement.previousElementSibling
        .querySelector('section').textContent.match(/[0-9]+/);

    if (idMatch) {
        const textList = [];
        dfsGetText(c, textList);

        result.push({ 'id': idMatch[0], 'text': textList.join('') });
    }
});

console.log(JSON.stringify(result, undefined, 4));