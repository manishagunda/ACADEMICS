n=int(input("enter n"))
def sum(n):
    sum=0
    i=1
    for i in range(1,n+1):
        sum=sum+i
    return sum

print("sum= ",sum(n))