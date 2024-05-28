t1=[1,2,-1,-3,3,4,-5]
t2=[]
for i in t1:
    if(i<0):
        t2.append(i)
print(tuple(t2))
print(tuple(t1))