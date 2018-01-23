N = int(input())
x = []
y = []
for i in range(0, N):
    answer = input()
    x.append(answer)

for j in range(0, N):
    canswer = input()
    y.append(canswer)

number = 0
for each in range(0, N):
    if x[each] == y[each]:
        number = number + 1

print(number)