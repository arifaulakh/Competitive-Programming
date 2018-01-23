limit = int(input())
speed = int(input())
speeding = speed - limit

if speed <= limit:
    print("Congratulations, you are within the speed limit!")
elif speeding >= 1 and speeding <= 20:
    print("You are speeding and your fine is $100.")
elif speeding >= 21 and speeding <= 30:
    print("You are speeding and your fine is $270.")
elif speeding >=31:
    print("You are speeding and your fine is $500.")
