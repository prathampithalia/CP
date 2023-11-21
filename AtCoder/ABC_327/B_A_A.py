n=int(input())
p = 1
i=1
ok=False
while p < (n+1+1) :
    p=pow(i,i)
    if( p == n ):
        ok=True
        break
    i+=1
if( ok==False ): print( -1 )
else : print(i)
