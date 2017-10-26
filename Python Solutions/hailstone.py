n = int(input())
while (n>0):
    if n%2 == 0:
      n/2
    if n%2 != 0:
        n*3+1
    if n == 1:
        break
print(n)