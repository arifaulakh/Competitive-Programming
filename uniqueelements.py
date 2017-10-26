N = int(input())
x = []
for i in range(0, N):
    each = int(input())
    x.append(each)

x.sort()
count = 1
for j in range(1, N):
    if x[j] != x[j-1]:
        count = count + 1
        
print(count)