from math import factorial
n,k=map(int,input().split())
a=list(map(int,input().split()))

b=[]

for x in a:
    if x not in b:
        b.append(x)

for i in range(len(b)):
    z=((n)/(factorial(a.count(b[i])))*k)

print(int(z))