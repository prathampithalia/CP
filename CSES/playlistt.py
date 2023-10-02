from typing import Counter

n=int(input())
a=list(map(int,input().split()))
while len(a)==n:
    t = Counter(a).keys()
    print(len(t))
    break
