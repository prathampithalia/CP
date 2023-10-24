for _ in range(int(input())):
    n=int(input())
    a=list(map(int,input().split()))

    ans=[]
    for i in range(len(a)-1 ,  -1 , -1):
        if( a[i] not in ans):
            ans.append(a[i])
    
    ans.reverse()

    print(' '.join(map(str,ans)))