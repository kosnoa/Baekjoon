from sys import stdin

for _ in range(3):
    n = int(stdin.readline())
    s = [int(stdin.readline()) for i in range(n)]
    if sum(s) < 0:
        print("-")
    elif sum(s) > 0:
        print("+")
    else:
        print("0")
        