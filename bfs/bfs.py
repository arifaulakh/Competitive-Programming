a,b,c,d,e = input().split(" ")
x = []
x.append(int(a))
x.append(int(b))
x.append(int(c))
x.append(int(d))
x.append(int(e))
total = x[0]*5 + x[1]*10 + x[2]*25 + x[3]*100 + x[4]*200
print(total)