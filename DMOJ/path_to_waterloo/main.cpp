#include <bits/stdc++.h>
using namespace std;
const int MAXN = 500;
int N, T, dist[MAXN];
bool visited[MAXN];
vector<int> adj[MAXN];
map<string, int> places;
queue<int> q;
void BFS(int x){
    visited[x] = true;
    dist[x] = 0;
    q.push(x);
    while (!q.empty()){
        int s = q.front();
        q.pop();
        for (auto u : adj[s]){
            if (visited[u]) continue;
            visited[u] = true;
            dist[u] = dist[s] + 1;
            q.push(u);
        }
    }
}
int main(){
    freopen("data.txt","r",stdin);
    cin >> N >> T;
    cin.ignore();
    places["home"] = 1, places["Waterloo GO"] = N + 2;
    for (int i = 1; i <= N; i++){
        string place;
        getline(cin, place);
        places[place] = i + 1;
    }
    while (T--){
        string c, a, b;
        int idx = -1;
        getline(cin, c);
        for (int i = 0; i < (int)c.length(); i++){
            if (c[i] == '-')
                idx = i;
        }
        for (int i = 0; i < idx; i++){
            a += c[i];
        }
        for (int i = idx + 1; i < (int)c.length(); i++){
            b += c[i];
        }
        int x = places[a], y = places[b];
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    BFS(1);
    if (visited[N + 2]) cout << dist[N + 2] << endl;
    else cout << "RIP ACE" << endl;
    return 0;
}