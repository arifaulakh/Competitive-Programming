n = int(input())
while(True):
    n+=1
    copy = str(n)
    isdif = True
    for i in range(0, len(copy)):
        for j in range(i+1, len(copy)):
            if copy[j]==copy[i]:
                isdif = False
                break
    if isdif==True:
        print(n)
        break
    elif isdif ==False:
      continue
  