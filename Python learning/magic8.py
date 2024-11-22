import random
import os

os.system('cls' if os.name == 'nt' else 'clear')
name = input("What is your name?\n")
if name == "":
    name = "this dude"
os.system('cls' if os.name == 'nt' else 'clear')
question = input("Only yes or no questions available for now\nwhat is your question?\n")
if question == "":
    question = "Is " + name + " stupid?"
os.system('cls' if os.name == 'nt' else 'clear')
answer = ""

random_number = random.randint(1, 9)

if random_number == 1:
    answer = "For sure"
elif random_number == 2:
    answer = "Certainly"
elif random_number == 3:
    answer = "Probably"
elif random_number == 4:
    answer = "Can happen"
elif random_number == 5:
    answer = "Not sure"
elif random_number == 6:
    answer = "Probably not"
elif random_number == 7:
    answer = "No"
elif random_number == 8:
    answer = "Not at all"
else:
    answer = "Maybe in another life"

if (name == "this dude") and (question == "Is " + name + " stupid?"):
    print(question + "\nMagic 8 answer is: From above and beyond in this category")
else:   
    print(name + " ask: " + question + "\nMagic 8 answer is: " + answer)

