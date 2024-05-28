def palindrome(s):
    if(s==s[::-1]):
        print("palindrome")
    else:
        print("not palindrome")
s=input()
palindrome(s)