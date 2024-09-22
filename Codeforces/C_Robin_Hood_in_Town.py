def cal(a,m):
    t = sum(a)
    uh = 0 
    for i in range(len(a)-1):
        if(a[i] < ((t+m)/(n*2)) ):
            uh+=1

    if( a[len(a)-1] + m < ((t+m)/(n*2))):
        uh += 1
    
    return uh


for _  in range(int(input())):
    n = int(input())
    a=list(map(int,input().split()))
    a.sort()
    ans = -1
    l = 0
    r = 10**18
    m= (l+r)>>1
    while( l <=r ):

        if( cal(a,m) <= n/2 ):
            l = m+1
        else:
            r = m-1
            ans = m

        m= (l+r)>>1
    
    print(ans)
