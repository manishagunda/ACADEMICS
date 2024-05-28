n=int(input("enter n"))
def fact(n):
    if(n==0 or n==1):
        res=1
        return res
    else:
        res=n*fact(n-1)
        return res
print("factor00ial= ",fact(n))