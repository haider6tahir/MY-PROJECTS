# PASSWORD GENERATOR IN PYTHON:

import random

print("WELCOME TO PASSWORD GENERATOR")

chars= 'abcdefghijklmnopqrstuvwxyz1234567890ABCDEFGHIJKLMNOPQRSTUVWXYZ!@#$%^&*()'

number=input("ENTER THE NUMBERS OF PASSWORD TO GENERATE:")
number=int(number)
lenght=input("ENTER THE LENGTH OF PASSWORD: ")
lenght=int(lenght)

print("\n HERE ARE YOUR PASSWORDS")

for pwd in range(number):
    passwords=''

    for c in range(lenght):
         passwords+=random.choice(chars)

    print(passwords)

