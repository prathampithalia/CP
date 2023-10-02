
n,x=map(int,input().split())
a=list(map(int,input().split()))
b=list(a)
ans=False
a.sort()
s=0
e=n-1

while(s<e):
    if(a[s]+a[e]==x):
        ans=True
        v1,v2=(a[s],a[e])

    if(a[s]+a[e]>x):e-=1
    else : s+=1

if ans: print(b.index(v2)+1,b.index(v1)+1)
else : print("IMPOSSIBLE")
