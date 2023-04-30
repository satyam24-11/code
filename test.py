s1=list(input())
s2=list(input())
if len(s1)!=len(s2):
    print("NO")
else:
    s1.sort()
    s2.sort()
    if s1==s2:
        print("YES")
    else:
        print("NO")
