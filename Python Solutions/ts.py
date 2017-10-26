game1 = input()
game2 = input()
game3 = input()
game4 = input()
game5 = input()
game6 = input()
x = []
x.append(game1)
x.append(game2)
x.append(game3)
x.append(game4)
x.append(game5)
x.append(game6)
numW = x.count("W")
count = 0
if numW >=5:
    count = count + 1
elif numW >= 3 and numW <= 4:
    count = count + 2
elif numW >= 1 and numW <= 2:
    count = count + 3
else:
    count = count-1

print(count)