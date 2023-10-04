s=input()

u=s[0].lower() + s[1:len(s)].upper()

a=s.upper()

t=s.capitalize()

if( s==u) : print(t)

elif( s==a) : print(s.lower())

else: print(s)