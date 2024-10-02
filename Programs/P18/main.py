#Breckin Hume
#CMPS-4143-102
#10/2/2024
#Python Intro

print("Hello there, lets learn python :)")

num = int(input("Enter a number: "))
sum = 0
for i in range(0, num + 1):
  sum += i
print(sum)

num2 = int(input("Enter another number: "))
if num2 % 2 == 0:
  print("Your number is even")
elif num2 % 2 != 0:
  print("Your number is odd")
if num2 > 0:
  print("Your number is positive")
elif num2 < 0:
  print("Your number is negative")
if num2 == 0:
  print("Your number is zero")

num3 = int(input("Enter another number: "))
for i in range(0, num3 + 1):
  print("Current number is " + str(i) + " and the square is " + str(i * i))

fname = (input("What is your first name? "))
lname = (input("What is your last name? "))
print("Nice to meet you " + fname + " " + lname)
if fname == lname:
  print("Wait a minute...your first and last name are the same ")

print("PIZZA TIME")
pizzas = int(input("How many pizzas are we ordering? "))
slices = pizzas * 8
people = int(input("How many people are attending the pizza party? "))
slicesPerPerson = slices // people
leftover = slices % people
print("Each person will get " + str(slicesPerPerson) + " and there will be " +
      str(leftover) + " slices leftover")
