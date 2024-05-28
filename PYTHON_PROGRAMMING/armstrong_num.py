s=0
n=int(input("Enter a number: "))
a=n
while a>0:
   d=a%10
   s+=d**3
   a//= 10
if n==s:
   print(n,"is an Armstrong number")
else:
   print(n,"is not an Armstrong number")