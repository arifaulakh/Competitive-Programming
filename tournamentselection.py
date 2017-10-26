count = 0
for i in range(0,6):
    result = input()
    if result == "W":
        count+=1
if count >=5:
    print("1")
if count >=3 and count <=4:
    print("2")
if count >=1 and count <= 2:
    print("3")
if count == 0:
    print("-1")