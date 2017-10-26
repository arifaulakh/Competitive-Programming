n = int(input())
for i in range(0,n):
  count = 0
  each = int(input())
  for j in range(1, each + 1):
    if each%j == 0 and each != j:
      count +=j 
  if count == each:
    print(str(each) + " is a perfect number.")
  elif count > each:
    print(str(each) + " is an abundant number.")
  elif count < each:
    print(str(each) + " is a deficient number.")
