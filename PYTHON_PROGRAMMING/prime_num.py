#while loop
n=int(input("enter n"))
f=0
i=2
while(i<=n):
    if(n%i==0):
        f=1
        break
    i+=1
if(f==1):
    print("not prime")
else:
    print("prime")
#for loop    
f=0
num = int(input("Enter a number: "))
for i in range(2,num):
    if(num % i) == 0:
        f==1
        break
if(f==1):
    print("not prime")
else:
    print("prime")
