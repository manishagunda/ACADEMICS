#continue
for i in range(1,11):
    if(i == 5):
        continue
    print(i)
#break
n=int(input("enter num"))
i=1
while(i<=n):
    if(i==5):
        break
    else:
        print(i)
        i+=1
#pass
n=int(input("enter num"))
i=1
while(i<=n):
    if(i==5):
        print("pass executed")
        pass
    print(i)
    i+=1
        