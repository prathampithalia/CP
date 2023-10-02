n=int(input())
a=list(map(int,input().split()))
if len(a)<n:
    l=list(range(1,n+1))
    for el in l:
        if el not in a:
            print(el)
        
if len(a)>=n:
    print()