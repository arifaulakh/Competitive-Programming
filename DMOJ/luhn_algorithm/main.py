for _ in range(5):
	numbers = input().split()
	total = ""
	for num in numbers:
		non = 0
		yes = 0
		copy = num[::1]
		for char in (0, len(num)):
			if (char%2!=0):
				yes+=int(copy[char])*2
			else:
				non+=int(copy[char])
		final = non+yes
		fin = 10-(final%10)
		fin = str(fin)
		total+=fin
	print(total)
