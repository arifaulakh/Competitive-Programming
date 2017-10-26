N = int(input())
x = []
y = []
listprime = []
nonprime = []
for i in range(0, N):
    x1, x2 = input().split(" ")
    x.append(int(x1))
    y.append(int(x1))

for j in range(0, len(x)):
    for each in range(x[j], y[j]):
        for a in range(x[j], y[j]):
            if each % a == 0 and each != a:
                nonprime.append(each)
            else:
                listprime.append(each)

for item in listprime:
    print(item)

print(x)