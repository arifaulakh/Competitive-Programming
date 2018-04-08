//Dijkstra's Algorithm
#include <bits/stdc++.h>
const int MAXN = 1005, INF = 1e9;
using namespace std;
typedef pair<int, int> ii;
int N, M;
int dist[MAXN];
vector <ii> adj[MAXN];
priority_queue<ii,vector<ii>,greater<ii> >pq;
void dijkstra(int src){
   for (int i = 1; i <= N; i++) dist[i] = INF;
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
    scanf("%d%d", &N,&M);
    for (int i = 1; i <= M; i++){
        int a, b, w;
        scanf("%d%d%d", &a, &b, &w);
        adj[a].push_back(ii(w, b));
        adj[b].push_back(ii(w, a));
    }
    dijkstra(1);
    for(int i = 1; i <= N; ++i) printf("%d\n", dist[i]==INF?-1:dist[i]);
    return 0;
}