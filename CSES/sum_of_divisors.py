n=int(input())
cnt=0
for i in range(1,n+1):
    for j in range(1,i+1):
        if i%j==0:
            cnt+=j
print(cnt)