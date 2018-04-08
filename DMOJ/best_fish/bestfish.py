C = int(input())
c = []
for x in range(0, C):
    c1, c2 = input().split(" ")
    cproduct = int(c1)*int(c2)
    c.append(cproduct)
N = int(input())
n = []
for y in range(0, N):
    n1, n2 = input().split(" ")
    nproduct = int(n1)*int(n2)
    n.append(nproduct)
nsort = sorted(n)
csort = sorted(c)
casper = csort[len(csort)-1]
natalie = nsort[len(nsort)-1]
if casper > natalie:
    print("Casper")
elif natalie > casper:
    print("Natalie")
else:
    print("Tie")
