x=int(input("enter x"))
y=int(input("enter y"))
def outerfunction(a,b):
    print(a+b)
    print(a-b)
    def innerfunction():
        print(a*b)
        print(a/b)
    innerfunction()
outerfunction(x,y)