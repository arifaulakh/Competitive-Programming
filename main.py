N = int(input())
total = 0
for i in range(0,N):
    x = []
    y = []
    z = []
    each = input()
    for char in each:
        x.append(char)
    y.append(x[len(x)-1])
    z.append(x[0:len(x)-1])
    a = "".join(y)
    print(a)
    print(z)