N = int(input())
v = []
diff = []
for i in range(N):
    x = int(input())
    v.append(x)
v.sort()
for i in range(1, N-1):
    ans = float(float((v[i]-v[i-1])/2)+float((v[i+1]-v[i])/2))
    diff.append(ans)
print(min(diff))
    