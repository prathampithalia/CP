
s=input()
t=s
ans = ""


while s.find("at") != -1:
    s= s.replace("at","@")

while s.find("dot") != -1 :
    s = s.replace("dot",".")


if( s[0]=='.'):
    s=s.replace(".","dot",1)

if( s[0]=='@'):
    s=s.replace("@","at",1)

ans = s

if( s[len(s)-1]=='@'):
    ans = s[:len(s)-1] + "at"


if( s[len(s)-1]=='.'):

    ans = s[:len(s)-1] + "dot"

ans1=""

if( ans.count("@")>1):
    ok= True
    for i in range(len(ans)):
        if( ans[i]=='@' ):
            if( ok ) : 
                ans1 += '@'
                ok = False
            else :
                ans1 += "at"
        else :
            ans1 += ans[i]

else: ans1=ans

print(ans1)