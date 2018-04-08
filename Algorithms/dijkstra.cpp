/*
Dijkstra's Algorithm (Single Source Shortest Path)
Sample Input:
4 5
0 1 2
0 3 8
1 2 2
1 3 4
2 3 1
0 3
Sample Output:
The shortest distance from 0 to 3 is 5.
Take the path: 0->1->2->3
*/
#include<iostream>
#include<queue>
#include<vector>
using namespace std;

const int MAXN = 100, INF = 100000000;
int dist[MAXN], pred[MAXN];
vector<pair<int, int> > adj[MAXN];

void dijkstra(int nodes, int start){
  vector<bool> vis(nodes, false);
  for (int i = 0; i< nodes; i++){
    dist[i] = INF;;
    pred[i] = -1;
  }
  int u, v;
  dist[start] = 0;
  priority_queue<pair<int, int> > pq;
  pq.push(make_pair(0,start));
  while(!pq.empty()){
    u = pq.top().second;
    pq.pop();
    vis[u] = true;
    for (int j = 0; j<(int)adj[u].size();j++){
      if(vis[v = adj[u][j].first]) continue;
      if(dist[v] > dist[u] + adj[u][j].second){
        dist[v] = dist[u] + adj[u][j].second;
        pred[v] = u;
        pq.push(make_pair(-dist[v],v));
      }
    }
  }
}
void print_path(int dest){
  int i = 0, j = dest, path[MAXN];
  while(pred[j]!=-1) j = path[++i] = pred[j];
  cout < "Take the path: ";
  while(i>0) cout << path[i--] << "->";
  cout << dest << endl;
}
int main(){
  int nodes, edges, u, v, w, start, dest;
  cin >> nodes >> edges;
  for(int i = 0; i < edges; i++){
    cin >> u >> v >> w;
    adj[u].push_back(make_pair(v,w));
  }
  cin >> start >> dest;
  dijkstra(nodes,start);
  cout << "The shortest distance from " << start;
  cout << " to " << dest << " is " << dist[dest] << endl;
  print_path(dest);
  return 0;
}