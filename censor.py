n = int(input())
for i in range(0,n):
  phrase = input()
  x = phrase.split(" ")
  y = []
  for word in x:
    count = 0
    for char in word:
      count += 1
    if count == 4:
      word = "****"
    y.append(word)
  sentence = " ".join(y)
  print(sentence)