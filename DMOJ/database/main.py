S = input()
copy = S 
A = list(copy)
codes = [copy]
N = int(input())
for i in range(1, N):
  x = input()
  y = x.split(" ")
  a = int(y[0])
  b = y[1]
  A[a-1] = b 
  copy2 = A 
  c = "".join(copy2)
  codes.append(c)
codes.sort()
Q = int(input())
for i in range(0, Q):
  d = input()
  e = d.split(" ")
  f = int(e[0])
  g = int(e[1])
  word = codes[f-1]
  final = word[g-1]
  print(final)
  