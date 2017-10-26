a1, a2, a3 = input().split(" ")
x = []
x.append(a1)
x.append(a2)
x.append(a3)
abc = input()
y = sorted(x)
if abc == "ABC":
    print(y[0])
    print(y[1])
    print(y[2])
if abc == "ACB":
    print(y[0])
    print(y[2])
    print(y[1])
if abc == "CBA":
    print(y[2])
    print(y[1])
    print(y[0])
if abc == "CAB":
    print(y[2])
    print(y[0])
    print(y[1])
if abc == "BAC":
    print(y[1])
    print(y[0])
    print(y[2])
if abc == "BCA":
    print(y[1])
    print(y[2])
    print(y[0])


        