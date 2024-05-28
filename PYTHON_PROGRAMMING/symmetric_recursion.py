def symmetric(a,s1,s2):
    if(s2>=len(a)):
        return True
    if(a[s1]!=a[s2]):
        return False
    return symmetric(a,s1+1,s2+1)
def sym(a):
    return symmetric(a,0,len(a)//2)
print(sym("abcabc"))