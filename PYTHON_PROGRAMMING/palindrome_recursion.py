def palindrome(a,s,e):
    if(s>=e):
        return True
    if(a[s]!=a[e]):
        return False
    return palindrome(a,s+1,e-1)
a=input()
if(palindrome(a,0,len(a)-1)==True):
    print("palindrome")
else:
    print("not palindrome")