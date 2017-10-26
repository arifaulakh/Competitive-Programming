n = int(input())
a = []
d = []
an = 100
dav = 100
for i in range(0, n):
    x1, x2 = input().split(" ")
    a.append(int(x1))
    d.append(int(x2))
for j in range(0, len(a)):
    if a[j] > d[j]:
        dav = dav - a[j]
    elif d[j] > a[j]:
        an = an - d[j]
print(an)
print(dav)
    










