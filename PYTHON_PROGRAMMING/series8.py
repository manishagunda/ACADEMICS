n=int(input("enter rows"));
for i in range(n,0,-1):
    for j in range(0, n-i):
        print(end=" ")
    for j in range(0,i):
        print(chr(96+i), end=" ")
    print("\n")