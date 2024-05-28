t=int(input("enter threshold value"))
b=int(input("enter base price"))
n=int(input("enter num of passengers"))
s=0
w=[]
for i in range(1,n+1):
    m=int(input("enter weight"))
    w.append(m)
    if(m<t):
        s=s+b
    else:
        s=s+2*b
print("flight earning=",s)
    