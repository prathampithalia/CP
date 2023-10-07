n=int(input(''))
ar=[n]
while True:
    if n%2==0:
        n=n/2
        ar.append(int(n))

    if n==1 :
        break
    if n%2==1:
        n=(n*3)+1
        ar.append(int(n))

        n=n/2
        ar.append(int(n))

    if n==1:
        break

print(' '.join(map(str,ar)))
