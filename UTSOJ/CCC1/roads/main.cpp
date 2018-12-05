#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e3 + 3;
int N, M, Q, dist[MAXN];
vector<int> adj[MAXN];
bool visited[MAXN], deleted[MAXN];
queue<int> q;
void BFS(int x){
    memset(visited, false, sizeof visited);
    memset(dist, 0, sizeof dist);
    visited[x] = true;
    dist[x] = 0;
    q.push(x);
    while (!q.empty()){
        int s = q.front();
        q.pop();
        if (deleted[s]==true)continue;
        for (auto u : adj[s]){
            if (deleted[u])continue;
            if (visited[u])continue;
            visited[u] = true;
            dist[u] = dist[s] + 1;
            q.push(u);
        }
    }
}
int main(){
    freopen("data.txt", "r", stdin);
    cin >> N >> M >> Q;
    for (int i = 1; i <= M; i++){
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    while (Q--){
        int q;cin >> q;
        deleted[q] = true;
        BFS(1);
        if (visited[N])cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}