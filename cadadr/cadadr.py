x = input()
length = len(x)-3
itemlist = []
for i in range(2, length-1):
    word = "(c" + x[i] + "r "
    itemlist.append(word)

ending = "x" + len(itemlist)*")"
itemlist.append(ending)
final = "".join(itemlist)
print(final)