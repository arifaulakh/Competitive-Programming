#include <bits/stdc++.h>
const int MAXN = 6003, INF = 1e9;
using namespace std;
typedef pair<int, int> ii;
int N, Q;
int dist[MAXN];
vector <ii> adj[MAXN];
priority_queue<ii,vector<ii>,greater<ii> >pq;
void dijkstra(int src){
   //memset(dist, INF, sizeof dist);
   dist[src] = 0;
   pq.push(ii(0,src));
   while(!pq.empty()){
       ii front = pq.top(); pq.pop();
       int d = front.first, u = front.second;
       if (d>dist[u]) continue;
       for (int j = 0; j < (int)adj[u].size(); j++){
           ii v = adj[u][j];
           if (d + v.first < dist[v.second]){
               dist[v.second] = d + v.first;
               pq.push(ii(dist[v.second], v.second));
           }
       }
   }
}
int main(){
    freopen("data.txt","r",stdin);
    cin >> N;
    for (int i = 1; i <N; i++){
        int a, b, w; cin >> a >> b >> w;
        adj[a].push_back(ii(w, b));
        adj[b].push_back(ii(w, a));
    }
    cin >> Q;
    dijkstra(2);
    cout << dist[5] << endl;
    return 0;
}