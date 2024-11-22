import os

os.system('cls' if os.name == 'nt' else 'clear')
weight = float(input("weigth:\n"))
os.system('cls' if os.name == 'nt' else 'clear')
price_per_shipping = 0.0
charge = 0.0
shipping_grade = int(input(
"""Please select the number between our 3 grades: 
    1- Standard ground shipping
    2- Premium ground shipping
    3- Drone shipping
Visit our website for more information on our prices\n"""))
os.system('cls' if os.name == 'nt' else 'clear')
total_cost = 0.0

#For standard / premium ground shipping -- shipping price per pound
if (shipping_grade == 1) or (shipping_grade == 2):
    if weight <= 2:
        price_per_shipping = 1.50
    elif (weight >= 2) and (weight <= 6):
        price_per_shipping = 3.00
    elif (weight >= 6) and (weight <= 10):
        price_per_shipping = 4.00
    else:
        price_per_shipping = 4.75
else:
#For drone shipping -- shipping price per pound
    if weight <= 2:
        price_per_shipping = 4.50
    elif (weight >= 2) and (weight <= 6):
        price_per_shipping = 9.00
    elif (weight >= 6) and (weight <= 10):
        price_per_shipping = 12.00
    else:
        price_per_shipping = 14.25

#Charge depending on shipping grade:
if shipping_grade == 1:
    charge = 20.00
elif shipping_grade == 2:
    charge = 125.00
elif shipping_grade == 3:
    charge = 0.0
else:
    print("unknown shipping grade")

if (weight == 0) or (not (shipping_grade >= 1) and not (shipping_grade <= 3)):
    print("Error unknown shipping grade or unvalid weight")
else:
    total_cost = price_per_shipping * weight + charge
    print("The total cost of this shipping will be: $" + str(total_cost))

