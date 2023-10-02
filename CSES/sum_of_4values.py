n,x=map(int,input().split())
arr=list(map(int,input().split()))
for i in range(n):
    for j in range(n):
        for k in range(n):
            for l in range(n):
    
                    if i==j==k==l:
                        pass
                    if n>=4:
                        if i!=j!=k!=l:
                            summ=arr[i]+arr[j]+arr[k]+arr[l]

                            if summ==x:
                                print(i+1,j+1,k+1,l+1)
else:
    print("IMPOSSIBLE")


if sum(arr) < x:
    print("IMPOSSIBLE")
