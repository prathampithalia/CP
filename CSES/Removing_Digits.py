n=int(input())
t=str(n)
s=list(t)
s.sort()
z=len(s)
j=0
# 27→20→18→10→9→0
while(n!=0):
    n = n - int(s[z-1])
    z=-1 
    t=str(n)
    s=list(t)
    s.sort()
    z=len(s)
    j+=1
   
print(j)
