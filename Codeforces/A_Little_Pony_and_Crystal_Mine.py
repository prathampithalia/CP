n=int(input())

for i in range(int(n/2) , -1 , -1):
    print(i*'*' , end="")
    print((int(n)-i*2)*'D' , end="")
    print(i*'*' , end="")

    print("")

for i in range(1, int(n/2)+1):
    print(i*'*' , end="")
    print((int(n)-i*2)*'D' , end="")
    print(i*'*' , end="")

    print("")