l1=[]
for i in range(1,21):
    l1.append(i)
print(l1)

for k in range(1,21):
    if(k%2==0):
        l1.remove(k)
print(l1)