N = int(input())
m = int(input())
good = True
for item in range(1, N):
    item = int(input())
    if item >= m:
        print("NO")
        good = False
        break
if good:
    print("YES")
