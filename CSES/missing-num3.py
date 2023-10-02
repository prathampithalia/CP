n=int(input())
a=set(map(int,input().split()))
y=set(range(1,n+1))
z=(y.difference(a))
for z in z :
    print(z)