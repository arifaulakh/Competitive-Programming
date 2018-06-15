#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1001;
vector<int> adj[MAXN];
bool visited[MAXN];
int dist[MAXN];
queue<int> q;

void BFS(int x){
    memset(dist,0,sizeof dist);
    memset(visited, false,sizeof visited);
    visited[x] = true;
    dist[x] = 0;
    q.push(x);
    while(!q.empty()){
        int s = q.front(); q.pop();
        for (auto u : adj[s]){
            if (visited[u]) continue;
            visited[u] = true;
            dist[u] = dist[s]+1;
            q.push(u);
        }
    }
}
int main() {
    freopen("data.txt","r",stdin);
    int N; cin >> N;
    vector<int> final;
    vector<int> d;
    for (int i = 1; i<=N; i++){
        int M; cin >> M;
        if (M>0){
            for (int j = 1; j<=M; j++){
                int x; cin >> x;
                adj[i].push_back(x);
            }
        }
        else{
            final.push_back(i);
        }
    }
    bool v = true;
    for (auto x : final){
        BFS(1);
        for (int i = 1; i<=x; i++){
            if (visited[i]==false) v = false;
        }
        if (v){
            d.push_back(dist[x]);
        }
    }
    // for (auto x : d){
    //     cout << x << " ";
    // }
    // if (v) {
    //     cout << "Y" << endl;
    //     int m = 1e5;;
    //     for (auto x : d){
    //         if (x<m)m = x;
    //     }
    //     cout << m << endl;
    // }
    // else cout << "N" << endl;
    return 0;
}