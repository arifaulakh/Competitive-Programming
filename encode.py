N = int(input())
S = input()
ll = "abcdefghijklmnopqrstuvwxyz"
lh = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
count = 0
final = []
for i in S:
    if i == " ":
      final.append(i)
      continue
    else:
      if i.isupper():
          length = lh.find(i)+N
          if length <= len(lh)-3:
              i = lh[length+2]
          if length >= len(lh)-2:
              i = lh[(length-len(lh))+2] 
          final.append(i)
      if i.islower():
          length = ll.find(i)+N
          if length <= len(ll)-3:
              i = ll[length+2]
          if length >= len(ll)-2:
              i = ll[(length-len(ll))+2]
          final.append(i)
final = "".join(final)         
print(final)


