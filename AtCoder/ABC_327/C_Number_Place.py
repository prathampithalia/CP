def ones(t):
    ok=True
    for i in range(9):
        if( t[i] != 1):
            ok=False

    return ok
    

n=9
board=[]

for i in range(n):
    a=list(map(int,input().split()))
    board.append(a)


v_check=True
h_check=True

# vertical check
for i in range(n):
    t=[0,0,0,0,0,0,0,0,0]
    for j in range(n):
        t[board[j][i] - 1] += 1
    # print(t)

    if ones(t)==False : 
        v_check=False

# Horizontal Check
for i in range(n):
    t=[0,0,0,0,0,0,0,0,0]
    for j in range(n):
        t[board[i][j] - 1] += 1
    if ones(t)==False : 

        h_check=False



# block wise check
block_check=True

for i in range(0,n,3):
    for l in range(0,n,3):
        t=[0,0,0,0,0,0,0,0,0]
        for j in range(i,3+i):
            for k in range(l,l+3):
                    t[int(board[j][k])-1] +=1

        if ones(t)==False : 
            block_check=False


# print(block_check)
# print(h_check)
# print(v_check)
if( block_check==True and v_check==True and h_check==True):

    print("Yes")
else :
    print("No")
                
