from cs50 import get_float

change = get_float("Change owed: \n")
quarters_number = int(change//0.25)
dimes_number = int((change - 0.25*quarters_number)//0.1)
nickels_number = int((change - 0.25*quarters_number - 0.1*dimes_number)//0.05)
pennies_number = int((change - 0.25*quarters_number - 0.1*dimes_number - 0.05*nickels_number)//0.01)

print(int(quarters_number+dimes_number+nickels_number+pennies_number))

