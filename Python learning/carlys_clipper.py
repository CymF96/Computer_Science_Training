hairstyles = ["bouffant", "pixie", "dreadlocks", "crew", "bowl", "bob", "mohawk", "flattop"]

prices = [30, 25, 40, 20, 20, 35, 50, 35]

last_week = [2, 3, 5, 8, 4, 4, 6, 2]

total_price = 0

for p in prices:
    total_price += p

length = len(prices)
average_price = total_price / length

print("Average Haircut Price: " + str(average_price))

new_prices = [p - 5 for p in prices]
print(new_prices)

total_revenue = 0

for i in range(0, len(hairstyles)):
    total_revenue += last_week[i] * prices[i]
print("Total revenue of last week: " + str(total_revenue))

average_daily_revenue = total_revenue / 7
print(average_daily_revenue)

cuts_under_30 = [hairstyles[i] for i in range(len(new_prices)) if new_prices[i] < 30]
print(cuts_under_30)