from math import factorial
t=int(input())
a=list(map(int,input().split()))
a.sort()
if (sum(a)-a[t-1]) >a[t-1]:
    print(sum(a))
else:
    print((max(a))*2)