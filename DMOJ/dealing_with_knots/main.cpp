#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1001;
vector<int> adj[MAXN];
bool visited[MAXN];
int N;
void DFS(int x){
    if (visited[x]) return;
    visited[x] = true;
    for (auto u : adj[x]){
        DFS(u);
    }
}
int main() {
    freopen("data.txt","r",stdin);
    cin >> N;
    for (int i = 1; i<=N; i++){
        int a, b; cin >> a >> b;
        adj[a].push_back(b);
    }
    int X, Y; cin >> X >> Y;
    DFS(X);
    if (visited[Y]) cout << "Tangled";
    else cout << "Not Tangled";
    return 0;
}