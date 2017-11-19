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
    if word[0] == '\"' and word[len(word)-1] == '\"':
      word2 = word[0] + "****" + word[len(word)-1]
      word = word2
    if word[0] == '\"' and word[len(word)-1] == '\"' and word[len(word)-2] == ".":
      word2 = word[0] + "****" + "." + word[len(word)-1]
      word = word2
    y.append(word)
  sentence = " ".join(y)
  print(sentence)
