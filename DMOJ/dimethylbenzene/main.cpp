#include <bits/stdc++.h>
using namespace std;
const int MAXN = 21;
vector<int> adj[MAXN];
bool visited[MAXN];
int N, M, cnt = 0;
void dfs(int x){
    if (visited[x]) return;
    visited[x] = true;
    for (auto u : adj[x]){
        dfs(u);
    }
}
int main() {
    freopen("data.txt","r",stdin);
    cin >> N >> M;
    for (int i = 1; i<=M; i++){
        int a, b; cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    bool cyc = false;
    dfs(1);
    if (visited[1]) cyc = true;
    else cyc = false;
    if (cyc){
        for (int i = 1; i<=M; i++){
            if (visited[i])cnt++;
        }
        if (cnt>=6)cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    else cout << "NO" << endl;
    return 0;
}