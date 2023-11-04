n=int(input())

for i in range(2**n) :
    a= str(bin(i^(i>>1)))    
    print( ('0' * (n-(len(a)-2))+ a[2:]))
