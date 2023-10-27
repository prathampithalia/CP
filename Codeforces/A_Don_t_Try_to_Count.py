for _ in range(int(input())):
    n,m= map(int,input().split())
    x=input()
    t=input()
    ok=False
    cnt=0
    for i in range(10):
        if(t in x):
            ok=True
            break
        else:
            x += x;
            cnt+=1
    
    if( ok) : print( cnt)
    else : print(-1)
