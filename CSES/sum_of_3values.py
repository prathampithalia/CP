n,x=map(int,input().split())
a=list(map(int,input().split()))
z='IMPOSSIBLE'
for i in range(n):
    for j in range(n):
        for k in range(n):
            if i!=j!=k!=i:
                if a[i]+a[j]+a[k]==x:
                    z=[i+1,j+1,k+1]
            else:
                pass

if z=='IMPOSSIBLE':

    print(z)            
else:
    print(' '.join(map(str,z)))