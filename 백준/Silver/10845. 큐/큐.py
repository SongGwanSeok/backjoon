from collections import deque
import sys
input = sys.stdin.readline

N = int(input())
q = deque()


def push(num):
    q.append(num)


def pop():
    if len(q) == 0:
        return -1
    else:
        return q.popleft()


def size():
    return len(q)


def empty():
    if size() == 0:
        return 1
    else:
        return 0


def front():
    if size() == 0:
        return -1
    else:
        return q[0]


def back():
    q_size = size()
    if q_size == 0:
        return -1
    else:
        return q[q_size-1]


for _ in range(N):
    cmd = input()
    if 'push' in cmd:
        cmd, num = cmd.split()
        push(num)
    elif 'pop' in cmd:
        print(pop())
    elif 'size' in cmd:
        print(size())
    elif 'empty' in cmd:
        print(empty())
    elif 'front' in cmd:
        print(front())
    elif 'back' in cmd:
        print(back())


