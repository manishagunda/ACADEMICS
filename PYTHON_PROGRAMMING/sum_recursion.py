n=int(input("enter n"))
def f(n):
    if(n==0 or n==1):
        return n
    else:
       return n+n*f(n-1)
print(f(n))