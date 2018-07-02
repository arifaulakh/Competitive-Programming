#include <bits/stdc++.h>
using namespace std;
const int MAXN = 10001, INF = 1e6;
vector<int> adj[MAXN];
vector<int> ending;
bool visited[MAXN];
int dist[MAXN], N;
queue<int> q;

void BFS(int x){
    //memset(dist,0,sizeof dist);
    //memset(visited, false,sizeof visited);
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
    cin >> N;
    for (int i = 1; i<=N; i++){
        int M; cin >> M;
        if (M==0) ending.push_back(i);
        else{
            for (int j = 1; j<=M; j++){
                int a; cin >> a;
                adj[i].push_back(a);
            }
        }
        
    }
    BFS(1);
    bool v = true;
    for (int i = 1; i<=N; i++){
        if (!visited[i]){
            v = false;
            break;
        }
    }
    if (v){
        cout << "Y" << endl;
        int MIN = INF;
        for (auto u : ending){
            if (dist[u]<MIN&&dist[u]!=0) MIN = dist[u];
        }
        cout << MIN+1 << endl;

    }
    else if (N==1){
        cout << "Y" << endl;
        cout << 1 << endl;
    }
    else{
        cout << "N" << endl;
        int MIN = INF;
        for (auto u : ending){
            if (dist[u]<MIN&&dist[u]!=0) MIN = dist[u];
        }
        cout << MIN+1 << endl;
    }
    return 0;
}