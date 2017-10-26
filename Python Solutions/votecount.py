V = int(input())
x = []
for item in range(1, V+1):
    item = input()
    x.append(item)
if x.count("A") > x.count("B"):
    print("A")
if x.count("B") > x.count("A"):
    print("B")
if x.count("A") == x.count("B"):
    print("Tie")