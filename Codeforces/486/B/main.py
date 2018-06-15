n = int(input())
strings = []
for i in range(n):
  s = input()
  strings.append(s)
strings.sort(key=len)
##print(strings)
last = strings[n-1]
instr = True
for i in range(0,n-1):
  if strings[i] not in last or strings[i] not in strings[i+1]:
    instr = False
if (instr):
  print("YES")
  for i in strings:
    print(i)
else:
  print("NO")

