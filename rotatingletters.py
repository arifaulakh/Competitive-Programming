N = input()
y = ['I', 'O', 'S', 'H', 'Z', 'X','N']
number = 0
for i in N:
    if i in y:
        number = number
    else:
        number = number + 1

if number == 0:
    print("YES")
if number > 0:
    print("NO")