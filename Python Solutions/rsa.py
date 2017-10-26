number1 = int(input())
number2 = int(input())
x = []
y = []
for item in range(number1, number2):
    x.append(item)

for each in x:
    if item % each == 0:
        y.append(each)

print(y)
    
