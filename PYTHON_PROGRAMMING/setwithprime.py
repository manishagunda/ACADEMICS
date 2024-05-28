t1=[]
for num in range(2,101):
    c=0
    for i in range(2,num):
        if(num%i==0):
            c+=1
            break
    if(c==0):
        t1.append(num)
print(set(t1))
t2=[]
for i in range(1,101):
    if(i%2!=0):
        t2.append(i)
print(set(t2))
set1=set(t1)
set2=set(t2)
print(set1)
print(set2)

    