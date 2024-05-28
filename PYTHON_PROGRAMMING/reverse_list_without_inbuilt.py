l=list(map(int,input().split()))
print(l)
a=0
b=len(l)-1
while(a<b):
    temp=l[a]
    l[a]=l[b]
    l[b]=temp
    a=a+1
    b=b-1
print(l)
    