#Breckin Hume
#CMPS-4143-102
#10/2/2024
#Python Intro


def recursive_sum(n):
  if n == 1:
    return 1
  else:
    return n + recursive_sum(n - 1)


def classify(x):
  a = input("For or while loop? Type F for for loop or W for while loop: ")
  if a == "F":
    sum = 0
    for i in range(1, x):
      if x % i == 0:
        sum += i
    if sum == x:
      return "p"
    elif sum < x:
      return "d"
    elif sum > x:
      return "a"
  if a == "W":
    sum = 0
    i = 1
    while i < x:
      if x % i == 0:
        sum += i
    if sum == x:
      return "p"
    elif sum < x:
      return "d"
    elif sum > x:
      return "a"
  

print("Hello there, lets learn python :)")

num = int(input("Enter a number to have sum calculated: "))
sum = 0
for i in range(0, num + 1):
  sum += i
print(sum)

num5 = int(input("Please enter a number to have sum calculated recursively: "))
print(recursive_sum(num5))

num2 = int(input("Enter another number to be categorized as odd, even etc: "))
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

num3 = int(input("Enter another number for calculating squares: "))
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

num4 = int(input("Please enter a number to be classified: "))
d = classify(num4)
if d == "p":
  print("Your number is perfect!")
elif d == "d":
  print("Your number is deficient!")
elif d == "a":
  print("Your number is abundant!")


