a=input()
s=0
m=0
k=len(a)//2
while(s!=k):
    if a[s]!=a[k]:
        m=1
        break
    s+=1
    k+=1
if m==0:
    print("symmetric")
else:
    print("not symmetric") 