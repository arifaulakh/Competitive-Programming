a = []
b = []
c = []
d = []
lists = []
count = 0
for i in range(0, 4):
    x1,x2,x3,x4 = input().split(" ")
    a.append(int(x1))
    b.append(int(x2))
    c.append(int(x3))
    d.append(int(x4))

for j in range(0, len(a)):
    sum1 = a[j] + b[j] + c[j] + d[j]
    lists.append(sum1)

if sum(a) == sum(b) == sum(c) == sum(d):
    count +=1

if lists[0] == lists[1] == lists[2] == lists[3]:
    count +=1

if count == 2:
    print("magic")
else:
    print("not magic")