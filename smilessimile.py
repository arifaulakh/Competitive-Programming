n = int(input())
m = int(input())
x = []
y = []
for item in range(1, n+1):
    adjectives = input()
    x.append(adjectives)

for itemm in range(1, m+1):
    noun = input()
    y.append(noun)

for adjectives in x:
    for noun in y:
        print(adjectives + " as " + noun)








