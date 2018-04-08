n = int(input())
votes = input()
x = []
x.append(votes)
y = []
for j in x:
  for char in j:
    y.append(char)
a = 0
b = 0
for each in y:
  if each == 'A':
    a += 1
  if each == 'B':
    b+=1
if a > b:
  print("A")
elif b > a:
  print("B")
elif a == b:
  print("Tie")