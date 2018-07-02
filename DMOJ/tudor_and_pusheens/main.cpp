#include<bits/stdc++.h>
using namespace std;
const int MAXN = 1e6+1;
vector<int> adj[MAXN];
bool visited[MAXN];
int N, M, dist[MAXN];
queue<int> q;

void bfs(int x){
	visited[x] = true;
	dist[x] = 0;
	q.push(x);
	while(!q.empty()){
		int s = q.front();q.pop();
		for (auto u : adj[s]){
			if (visited[u])continue;
			visited[u] = true;
			dist[u] = dist[s]+1;
			q.push(u);
		}
	}
}
int main(){
	freopen("data.txt","r",stdin);
	cin >> N >> M;
	for (int i = 1; i<=M; i++){
		int x, y; cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	int S, T; cin >> S >> T;
	bfs(S);
	cout << M-dist[T] << endl;
	return 0;
}