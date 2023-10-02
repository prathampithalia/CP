n=int(input())
a=list(map(int,input().split()))
a.sort()
arr1=[]
arr2=[]
arr1.append(a[-1])
arr1.append(a[0])

arr2=a[1:n-1]

print(sum(arr2)-sum(arr1))
