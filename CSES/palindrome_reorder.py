from itertools import permutations 


t=(input())
ar=permutations(t)
z='NO SOLUTION'
if t[:]==t[::-1]:
    print(t)
else:
    for i in ar:
        if i[:]==i[::-1]:
            z=i 
    print(''.join(map(str,z)))
