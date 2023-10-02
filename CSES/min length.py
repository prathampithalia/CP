x=[]
n=int(input())
a=list(map(int,input().split()))

for j in range(9):
    z=[]
    for i in range(n):
        z.append(abs(a[i]-j))
    x.append(sum(z))
print(min(x))