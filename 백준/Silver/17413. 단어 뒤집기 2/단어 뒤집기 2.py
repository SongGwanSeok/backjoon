from collections import deque
import sys

strList = sys.stdin.readline().rstrip()
rev = True
strRevList = ''
stack = deque()
temp = []
k = ''

for c in strList:
    if c == '<':
        if ' ' in stack:
            length = len(stack)
            i = 0
            while stack:
                k = stack[i]
                if k == ' ':
                    while temp:
                        strRevList += temp.pop()
                    stack.remove(k)
                    strRevList += ' '
                else:
                    temp.append(k)
                    stack.remove(k)
            while temp:
                strRevList += temp.pop()
        while stack:
            strRevList += stack.pop()
        rev = False
    elif c == '>':
        for s in stack:
            strRevList += s
        strRevList += '>'
        stack = []
        rev = True
    if c != '>':
        stack.append(c)

if stack:
    length = len(stack)
    i = 0
    while stack:
        k = stack[i]
        if k == ' ':
            while temp:
                strRevList += temp.pop()
            stack.remove(k)
            strRevList += ' '
        else:
            temp.append(k)
            stack.remove(k)
    while temp:
        strRevList += temp.pop()

print(strRevList)



