# Camila Ramirez
# Midterm 2

import random
randomNumber = random.randint(10,20)
minGuesses = 0
maxGuesses = 3

while minGuesses < maxGuesses:
    guess = input("Guess a random number between 10 and 20: ")
    minGuesses += 1

    if guess == randomNumber:
        print("You got the right number!")
        break
    else:
        print("Incorrect number")

if guess != randomNumber:
    print("Sorry you used all your attempts")
