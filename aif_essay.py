n = int(input())
for i in range(n):
	x = int(input())
	text = input().split(" ")
	text2 = []
	for word in text:
		if word.isupper():
			result = "!!!" + word + "!!!"
			text2.append(result)
		elif word[len(word)-1] == ".":
			result = word + "!!!"
			text2.append(result)
		else:
			text2.append(word)
	final = " ".join(text2)
	print(final)