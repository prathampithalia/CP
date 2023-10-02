from collections import Counter

n=int(input())
x=list(map(int,input().split()))
while len(x)==n:
    t = Counter(x).keys()
    print(len(t))
    break
