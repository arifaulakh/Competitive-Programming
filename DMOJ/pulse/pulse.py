N,S,T = input().split(" ")
N = int(N)
S = int(S)
T = int(T)
x = []
for i in range(0, N):
    n = int(input())
    x.append(n)
total = 0
for j in x:
  if j*2 >= S and j*2 <= T:
    total = total + 1
print(total)