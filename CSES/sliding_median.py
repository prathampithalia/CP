from statistics import median, median_low
n,k=map(int,input().split())
a=list(map(int,input().split()))

z=[]
for i in range(n):
    z.append(a[i:k+i])
med=[]
for v in z:
    if len(v)%2==0:
        med.append((median_low(v)))
    else:
        med.append(int(median(v)))

print(' '.join(map(str,med[:n-k+1])))