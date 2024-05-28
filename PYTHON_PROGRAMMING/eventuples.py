t1=()
t2=()
i=1
for i in range(int(1),int(21)):
    t1+=(i,)
    if(i%2==0):
        t2+=(i,)
print(t1)
print(t2)