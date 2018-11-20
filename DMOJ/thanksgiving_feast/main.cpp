#include<bits/stdc++.h>
using namespace std;
const int MAXK = 1e6+1, MAXN = 1e6+1;
int N, M, K, A, B, arr[MAXN], dist[MAXN], one[MAXK], two[MAXK];
queue<int>q;
bool visited[MAXN];
vector<int> adj[MAXN];
void bfs(int x){
  memset(visited, false, sizeof visited);
  memset(dist, 0, sizeof dist);
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

int main(){
  freopen("data.txt","r",stdin);
  cin >> N >> M >> K >> A >> B;
  for (int i = 1; i<=K; i++){
   	cin >> arr[i];
  }
  for (int i = 1; i<=M; i++){
    int a, b; cin >> a >> b;
    adj[a].push_back(b);
    adj[b].push_back(a);
  }
  bfs(A);
  for (int i = 1; i<=K; i++){
    one[i] = dist[arr[i]];
  }
  bfs(B);
  for (int i = 1; i<=K; i++){
    two[i] = dist[arr[i]];
  }
  int MIN = one[1]+two[1];
  for (int i = 1; i<=K; i++){
    MIN = min(MIN, one[i]+two[i]);
  }
  cout << MIN << endl;
  return 0;
}