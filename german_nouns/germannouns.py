N = int(input())
for i in range(0, N):
  total = 0
  phrase = input()
  x = phrase.split(" ")
  for c in x:
    if c[0].isupper():
      total += 1
  print(total)