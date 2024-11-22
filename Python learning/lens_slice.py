toppings = ["pepperoni", "pineapple", "cheese", "sausage", "olives", "anchovies", "mushrooms"]
prices = [2, 6, 1, 3, 2, 7, 2]

num_two_dollar_slices = prices.count(2)
num_pizzas = len(toppings)

pizza_and_prices = [list(pair) for pair in zip(toppings, prices)]
pizza_and_prices.sort(key=lambda x: x[1])

cheapest_pizza = pizza_and_prices[0]
#print(cheapest_pizza)
priciest_pizza=pizza_and_prices[-1]
#print(priciest_pizza)
pizza_and_prices.pop()
three_cheapest = pizza_and_prices[:3]
print(three_cheapest)
pizza_and_prices.append(["peppers", 2.5])
pizza_and_prices.sort(key=lambda x: x[1])
print(pizza_and_prices)
print("We seel " + str(num_pizzas) + " different kinds of pizzas!")

