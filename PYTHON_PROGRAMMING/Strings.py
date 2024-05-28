#Example of Strings and Some String Functions in Python Language
txt = "Welcome To Python Programming"
print("txt = ", txt)
print("Some Part of txt = ", txt[3:9]) #(3 to 9 Characters Means it Prints Upto 8 Cahracters Only)
print("Welcome" in txt)
print("World" in txt)
print("Language" not in txt)


#Some String Functions
String = "Example of Slice Function in Python Language"
String1 = "  Welcome To Python Programming";
print("\n\nString = ",String)
print("The Length of the String variable is = ",len(String)) #Length Fuction
s1 = slice(3) #Slice Function
print("s1 = ",String[s1])
s2 = slice(1,5)
print("s2 = ",String[s2])
s3 = slice(0,10,2)
print("s3 = ",String[s3])
print("String Variable in Upper Case = ",String.upper()) #upper function
print("String Variable in Lower Case = ",String.lower()) #lower function
print("String1 = ",String1)
print("String1 = ",String1.strip()) #strip function
print("Replace Function Used in String1 = ",String1.replace("Programming","Language"))


