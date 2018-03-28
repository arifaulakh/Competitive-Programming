#include <bits/stdc++.h>
const int MAXN = 100010;
using namespace std;
typedef pair<int, int> ii;
int N, M;
int dist[MAXN], dist2[MAXN];
vector <ii> adj[MAXN];
priority_queue<ii,vector<ii>,greater<ii> >pq;
void dijkstra(){
   memset(dist, 0x3f3f3f, sizeof dist);
   dist[0] = 0;
   pq.push(ii(0,0));
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
void dijkstra2(int src){
  memset(dist2, 0x3f3f3f, sizeof dist2);
   dist2[src] = 0;
   pq.push(ii(0,src));
   while(!pq.empty()){
       ii front = pq.top(); pq.pop();
       int d = front.first, u = front.second;
       if (d>dist2[u]) continue;
       for (int j = 0; j < (int)adj[u].size(); j++){
           ii v = adj[u][j];
           if (d + v.first < dist2[v.second]){
               dist2[v.second] = d + v.first;
               pq.push(ii(dist2[v.second], v.second));
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
    dijkstra();
    dijkstra2(N-1);
    int best = 0;
    for (int i = 0; i<N-1; i++){
      best = max(best, dist[i]+dist2[i]);
    }
    printf("%d", best);
    return 0;
}