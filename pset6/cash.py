while True:     #ask user for input, keep trying for wrong entries
  try:
    c = float (input ("Change owed: "))
  except ValueError:
    continue
  if c < 0:
    continue

  else:     #assign variables for coins, solve the math
    cents = round (c * 100)
    quarters = int (cents/25)
    dimes = int ((cents - (quarters * 25)) / 10)
    nickels = int ((cents - (quarters * 25 + dimes * 10)) / 5)
    pennies = int (cents - (quarters * 25 + dimes * 10 + nickels * 5))
    total = int (quarters + dimes + nickels + pennies)
    print (f'{total}')
    break