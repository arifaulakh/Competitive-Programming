G = {}
for i in range(1,1003):
    G[i] = set()
visited = [False for i in range(1003)]

def dfs(graph, node):
    if visited[node]==True:
        return
    visited[node] = True
    for v in G[node]:
        dfs(graph, v)

N = int(input())
for i in range(N):
    a, b = map(int, input().split())
    G[a].add(b)
X, Y = map(int, input().split())
dfs(G, X)
if (visited[Y]==True):
    print("Tangled")
else:
    print("Not Tangled")
