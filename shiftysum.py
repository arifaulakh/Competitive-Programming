N = int(input())
k = int(input())
x = []
x.append(N)
for item in range(1, k+1):
    y = N*(10**item)
    x.append(y)
sumlist = sum(x)
print(sumlist)

