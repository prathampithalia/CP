n=int(input())
li=list(map(int,input().split()))
a=[]
for li in li:
    if li not in a:
        a.append(li)

print(len(a))