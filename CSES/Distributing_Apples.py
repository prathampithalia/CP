from math import factorial

n,m=list(map(int,input().split()))
z=1e9+7
print(int(factorial(n+m-1) / (factorial(m) * factorial(n-1)))%z)
