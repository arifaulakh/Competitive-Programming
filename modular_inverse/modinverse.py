#debug
x = int(input())
m = int(input())
for n in range(1, m+1):
    if (x*n)%m == 1 and m%n == x:
        print(n)
        break

if (x*n)%m != 1 and m%n != x:
    print("No such integer exists")
        