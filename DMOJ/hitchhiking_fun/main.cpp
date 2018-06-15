#include<bits/stdc++.h>
using namespace std;
const int MAXN = 1e5+1;
typedef pair<int, int> ii;
vector<ii> adj[MAXN];
int N, M, dist[MAXN];
bool visit[MAXN];
queue<int> q;

void bfs(int x){
	visit[x] = true;
	dist[x] = 0;
	q.push(x);
	while(!q.empty()){
		int s = q.front(); q.pop()
	}
}
int main(){
	freopen("data.txt", "r", stdin);
	cin >> N >> M;
	for (int i = 1; i<=M; i++){
		int a, b, w; cin >> a >> b >> w;
		adj[a].push_back({b,w});
		adj[b].push_back({a,w});

	}
}