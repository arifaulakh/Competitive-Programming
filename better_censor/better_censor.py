import string
n = int(input())
for i in range(n):
    x = input()
    words = x.split()
    for j in words:
        if len(j) == 4:
            j = "****"
        else:
            length = len(j)
            for char in j:
                if char in string.punctuation:
                    length-=1
            if length == 4:
                for char in j:
                    if char not in string.punctuation:
                        char = "*"
    for j in words:
        print(j)
                    