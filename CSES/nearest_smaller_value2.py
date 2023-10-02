n=int(input())
a=list(map(int,input().split()))
ar=[]
for i,j in enumerate(a):   
    z=[0]
    for l in range(i): 
        if a[l] <j:z.append(l+1)
        else:z.append(0)
    ar.append(max(z))

print(' '.join(map(str,ar))) 