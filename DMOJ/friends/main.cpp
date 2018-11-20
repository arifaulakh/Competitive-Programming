#include<bits/stdc++.h>
using namespace std;
const int MAXN = 1e4+1;
int N, dist[MAXN],x, y;
bool visited[MAXN];
vector<int> adj[MAXN];
queue<int> q;
void BFS(int x){
  memset(visited,false,sizeof visited); 
  memset(dist,0,sizeof dist);
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
  freopn("data.txt","r",stdin);
  cin >> N;
  for (int i = 1; i<=N; i++){
    cin >> x >> y;
    adj[x].push_back(y);
  }
  while(1){
    cin >> x >> y;
    if (x==0)break;
    BFS(x);
    if (visited[y]){
      cout << "Yes " << dist[y]-1 << endl;
    }
    else cout << "No" << endl;
  }
  return 0;
}
