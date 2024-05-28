n=int(input("enter num"))
i=0
for i in range(len(num)):
    if num[i]!=[num-i]:
        print("not palindrome")
        break
    else:
        print("palindrome")
        break