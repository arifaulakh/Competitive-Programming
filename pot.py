N = int(input())
total = 0
for i in range(0,N):
  each = input()
  power = int((each[len(each)-1]))
  number = int(each[0:len(each)-1])
  exponent = number**power
  total+= exponent
print(total)