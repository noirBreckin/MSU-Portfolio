#Breckin Hume
#Program 3
#CMPS-4143-102


#Implementation of my print header function
def header():
  print("Breckin Hume \n")
  print("Program 3 \n")
  print("CMPS-4143-102 \n")


#Implementation of my recursive function that converts base 10 to base 2
def base10_to_base2(num):
  if num >= 1:
    base10_to_base2(num // 2)
  print(num % 2, end='')


#Calling my header function
header()

#Prompting user for input
x = int(input("Enter a number: \n"))

#If statement for if the user enters -1 on first request with the else statement
#leading to the main part of the program
if x == -1:
  print("You ran this but don't want to convert anything? Okay, bye!\n")
else:
  while x != -1:
    print(x, " in binary is: ")
    base10_to_base2(x)
    print("\n")
    print("Time to convert another number! Enter -1 to quit.\n")
    x = int(input("Enter the next number! \n"))
print("This was lots of fun, goodbye now!")
