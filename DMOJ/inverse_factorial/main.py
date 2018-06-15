from math import log
n = input()
l = 1
it = int(3e5)
for i in range(1, it):
    l+=log(i,10)
    if int(l) == len(n):
        fin = i
        break
if fin > 10:
    print(fin)
else:
    n = int(n)
    
    j = 1
    count = 0
    while n>1:
        n = n/j
        count+=1
        j+=1
    if count ==0:
      count = 1
    print(count)
