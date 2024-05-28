n = int(input("Enter Range of The Tables(Multiple of 5)"))
for i in range(1,n+1,5):
    first =i
    second=i+1
    third = i+2
    fourth = i+3
    fifth = i+4
    for j in range(1,11):
        print(first,"X",j,"=",first*j,"\t",second,"X",j,"=",second*j,"\t",third,"X",j,"=",third*j,"\t",fourth,"X",j,"=",fourth*j,"\t",fifth,"X",j,"=",fifth*j)
        
        
