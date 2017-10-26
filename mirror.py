N = int(input())
def prime(x):
  f = 2
  if x == 1:
    return False
  while (f*f <= x):
    if x % f == 0:
      return False
    f = f + 1
  return True
for i in range(0, N):
  count = 0
  a,b = input().split(" ")
  for x in range(int(a),int(b)):
    if prime(x):
      count = count + 1
  print(count)