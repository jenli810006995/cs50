## from: https://cs50.stackexchange.com/questions/32589/cs50-pset6-cash-py-not-returning-number-of-coins-used-for-change

from cs50 import get_float

#prompt user for change owed
while True:
    x = get_float("Change owed: ")
    if x >= 0:
        break

#convert to only cents
x = round(x * 100)

count = 0

#always use largest coin possible (quarter->dimes->nickels->pennies), keep track of coins used
while x > 0:
    if x >= 25:
        x -= 25
        count += 1
    elif x >= 10:
        x -= 10
        count += 1
    elif x >= 5:
        x -= 5
        count += 1
    elif x >= 1:
        x -= 1
        count += 1

#print number of coins used
print(count)
