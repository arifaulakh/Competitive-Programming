x = []
for i in range(0,4):
  i = int(input())
  x.append(i)
if x[3] > x[2] > x[1] > x[0]:
  print("Fish Rising")
elif x[3] < x[2] < x[1] < x[0]:
  print("Fish Diving")
elif x[3] == x[2] == x[1] == x[0]:
  print("Fish At Constant Depth")
else:
  print("No Fish")