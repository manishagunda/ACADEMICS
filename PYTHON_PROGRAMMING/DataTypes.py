#Data Types in Python Programming
print("The Following are the List of Data Types in Python Language")
print("Text Type:        str")
print("Numeric Types:    int, float, complex")
print("Sequence Types:   list, tuple, range")
print("Mapping Type:     dict")
print("Set Types:        set, frozenset")
print("Boolean Type:     bool")
print("Binary Types:     bytes, bytearray, memoryview")

#Example of Text Type
Name = "SR University"
print("Name = ",Name) # Displaying str Type

#Example of MultiLine String in Python
str5 = """This is a Example of MultiLine String in Python Programminh
The MultiLine String Can Be Declared by Using Three Quotes Starting and Ending of the String"""
print(str5)

#Example of Concatination os Strings
str1 , str2 ="Hello","World"
str3 , str4 = "Welcome To", "Python Programming"
print(str1,str2)
print(str1+str2)
print(str3,str4)
print(str3+str4)

#Example of Numeric Types
x , y = 10, 20
a , b = 10.6, 20.7
m , n = x + 3j, y + 7j
print("x = ",int(x),"y = ",int(y)) # Displaying int Type
print("a = ",float(a),"b =",float(b)) # Displaying Float Type
print("m =",complex(m),"n =",complex(n)) # Displaying Complex Type

#Example of Converting int to float and float to int and Converting int & float to str(string Data type)
print("Converting x to float = ",float(x))
print("Converting y to int = ",int(y))
print("Converting x & y both to Text = ",str(x),str(y))
