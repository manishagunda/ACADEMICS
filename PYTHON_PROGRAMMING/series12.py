a=int(input("enter rows"))
for i in range(1,a+1):
    for k in range(a-i+1):
        print(chr(97+k),end=' ')
    print("\n")