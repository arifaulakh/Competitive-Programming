N = int(input())
rounds = 0
for item in range(1, N+1):
    x1, x2 = input().split(" ")
    rounds = rounds + 1
    print(int(x1) + int(x2))


