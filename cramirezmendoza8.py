# Camila Ramirez 
# CSC 321 Lab 8

import random

randGuess = random.randint(0,9)

count = 0

while True:

    userInput = int(input("Enter a number between 0 and 9: "))
    count += 1

    if userInput < randGuess:
        print("Your input is lower than target number")
    elif userInput > randGuess:
        print("Your input is higher than target number")
    else:
        print("You guessed just right, found the target number")
        break

    print(f"Number of tries: {count}")

# print every other index

modInput = int(input("Enter a number: "))

for i in range(modInput):
    if i % 2 == 0:
        print("Every other index is", i)

