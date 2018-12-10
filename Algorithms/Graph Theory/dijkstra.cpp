#include <bits/stdc++.h>
const int MAXN = 1005, INF = 1e9;
using namespace std;
typedef pair<int, int> pii;
int N, M;
int dist[MAXN];
vector<pii> adj[MAXN];
priority_queue<pii, vector<pii>, greater<pii> > pq;
void dijkstra(int src){
  for (int i = 1; i <= N; i++)dist[i] = INF;
  dist[src] = 0;
  pq.push(pii(0, src));
  while (!pq.empty()){
    pii front = pq.top();
    pq.pop();
    int d = front.first, u = front.second;
    if (d > dist[u])continue;
    for (int j = 0; j < (int)adj[u].size(); j++){
      pii v = adj[u][j];
      if (d + v.first < dist[v.second]){
        dist[v.second] = d + v.first;
        pq.push(pii(dist[v.second], v.second));
      }
    }
  }
}