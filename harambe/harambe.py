a = input()
numupper = 0
numlower = 0
for char in a:
    if char.isupper():
        numupper = numupper + 1
    if char.islower():
        numlower = numlower + 1

if numupper > numlower:
    a = a.upper()
elif numupper < numlower:
    a = a.lower()
elif numupper == numlower:
    a = a

print(a)








