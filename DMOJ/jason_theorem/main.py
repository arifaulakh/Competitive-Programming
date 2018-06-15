n = int(input())
M = int(1e9+7)
final = (pow(2,n+3, M)+M-5)%M
print(final)