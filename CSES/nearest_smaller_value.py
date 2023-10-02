n=int(input())
a=list(map(int,input().split()))
ar=[]
for i in range(n):
    z=[0]
    for j in range(i):
        if (a[j]) < a[i] :z.append(j+1)
        else:z.append(0)
    ar.append(max(z))

print(' '.join(map(str,ar))) 