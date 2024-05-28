num =(input('Enter the string: '))
i=0
for i in range(len(num)):
   if num[i]!=num[-1-i]:
      print(num,'is not a Palindrome')
      break
   else:
      print(num,'is a Palindrome')
      break