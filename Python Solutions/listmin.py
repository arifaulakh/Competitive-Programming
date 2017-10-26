size = int(input())
x = []
for each in range(0, size):
    each = int(input())
    x.append(each)
y = sorted(x)
for item in range(0, size):
    print(y[item])
