class Solution:
    def isValidSudoku(self, board: List[List[str]]) -> bool:

        okv=True
        okh=True
        n=9
        Flag=True

        final=False
        ans=False

        for i in range(n):
            for j in range(n):

                elem= board[i][j]

                if( elem != '.'):
                    # vertical
                    for k in range( n):
                        if(board[i][k]== elem and j!=k ) : okv=False
                    # Horizontal
                    for k in range( n):
                        if(board[k][j]== elem and i!=k ) : okh=False

        if( okv== True and okh==True) : ans=True

        if( ans == True):
            for i in range(0,n,3):
                for l in range(0,n,3):
                    t=[0,0,0,0,0,0,0,0,0]
                    for j in range(i,3+i):
                        for k in range(l,l+3):
                            
                            if( board[j][k] != '.'):
                                t[int(board[j][k])-1] +=1
                            # print(str(j)+str(k) , end=' ')
                            # print( board[j][k] , end=" ")
                    # print(t)                        
                    for elm in t :
                        if( elm >1 ) : Flag=False
                        # print(' ')
                    # print(" ")

        if ( ans==True and Flag==True) : final = True

        return final

