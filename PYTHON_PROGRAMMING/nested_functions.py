def outerfunction1():
    a=int(input("enter a"))
    b=int(input("enter b"))
    def outerfunction2():
        x=int(input("enter x"))
        y=int(input("enter y"))
        def innerfunction():
            print(a+b)
            print(a-b)
            print(x*y)
            print(x/y)
        innerfunction()
    outerfunction2()
outerfunction1()