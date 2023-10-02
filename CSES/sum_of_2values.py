
n , t =map(int,input().split())
a=list(map(int,input().split()))
b=list(a)
f=0
j=n-1
ans=0
a.sort()
while(f!=j):
    s=a[f]
    e=a[j]

    if(s+e >t ): j=j-1 
    if(s+e < t): f=f+1
    if(s+e==t and f!=j):
        ans1=s
        ans2=e
        ans=1
        break

if ans!=1 : print("IMPOSSIBLE")
else : print(b.index(ans1)+1,b.index(ans2)+1)



