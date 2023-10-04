s=input()

t=s.split("WUB")

for i in t:
    if(i==''):t.remove(i)
    
for i in t:
    print(i,end=' ')
