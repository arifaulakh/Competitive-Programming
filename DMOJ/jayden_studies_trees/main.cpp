#include<bits/stdc++.h>
using namespace std;
const int MAXN = 1e4+4;
int N, dist[MAXN], MAX = -1, idx1, idx2, MAX2 = -1;
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
	freopen("data.txt","r",stdin);
	cin >> N;
	for (int i = 1; i<N; i++){
		int a, b; cin >> a >> b;
		adj[a].push_back(b);
		adj[b].push_back(a);
	}
	BFS(1);
	for (int i = 1; i<=N; i++){
		if (dist[i]>MAX){
			MAX = dist[i];
			idx1 = i;
		}
	}
	BFS(idx1);
	for (int i = 1; i<=N; i++){
		if (dist[i]>MAX2){
			MAX2 = dist[i];
			idx2 = i;
		}
	}
	cout << dist[idx2] << endl;
	return 0;
}