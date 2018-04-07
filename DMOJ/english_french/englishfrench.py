N = int(input())
x = []
for i in range(0, N):
  each = input()
  x.append(each)

tT = 0
sS = 0
for each in x:
  tT = tT + each.count('T') + each.count('t')
  sS = sS + each.count('S') + each.count('s')
  
if tT > sS:
  print('English')
  
if sS >tT or sS == tT:
  print('French')