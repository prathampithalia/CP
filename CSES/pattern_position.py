a=(input())
for _ in range(int(input())):
    z=input()
    if z in a:
        print(a.index(z)+1)
    else :
        print(-1)