from itertools import combinations, count, permutations , combinations_with_replacement



a=list(input())
arr=[]
for i in permutations(a):
    arr.append(i)

arr=list(set(arr))
arr.sort()
print(len(arr))
for j in range(len(arr)):
    for ii in arr[j]:
        print(ii,end='')   
    print( )
    