marks = 0
for i in range(0, 6):
  i = int(input())
  marks += i

aif = int(input())
requirement = int(input())
total = marks/6 + aif
if total >= requirement:
  print("yes")
else:
  print("no")