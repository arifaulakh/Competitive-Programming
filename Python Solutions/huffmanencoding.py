k = int(input())
letter = []
num = []
for i in range(0,k):
    char, number = input().split(" ")
    num.append(number)
    letter.append(char)
code = input()
i = 0
output = ""
while i < len(code):
    for j in range(0, k):
        if i + len(num[j])-1 >= len(code):
            continue
        matches = True
        for m in range(0, len(num[j])):
            if (code[m+i]!=num[j][m]):
                matches = False
                break
        if (matches):
            i = i + len(num[j])
            output = output + letter[j]
            break
print(output)