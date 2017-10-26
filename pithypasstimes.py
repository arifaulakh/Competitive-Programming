N = int(input())
string = input()
x = string.split(" ")
counter = 0
for each in x:
    if len(each) > 10:
        counter = counter + 1
    elif len(each) <= 10:
        counter = counter

total = N-counter
print(total)