a = int(input())
b = int(input())
c = int(input())
x = []
x.append(a)
x.append(b)
x.append(c)
x.sort()
if x[0] + x[1] > x[2]:
    print("Huh? A triangle?")
elif x[0] + x[1] <= x[2]:
    print("Maybe I should go out to sea...")
