a = float(input())
b = float(input())

x = a/(b**2)
if x > 25:
    print ("Overweight")
if x <= 25 and x >= 18.5:
    print ("Normal weight")
if x < 18.5:
    print ("Underweight")