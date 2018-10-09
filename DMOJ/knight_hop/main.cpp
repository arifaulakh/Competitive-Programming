#include<bits/stdc++.h>
using namespace std;
const int MAXN = 9;
int adj[MAXN][MAXN], a, b, dist[MAXN];
bool visited[MAXN];
queue<int> q;

void bfs(int x){
	visited[x] = true;
	dist[x] = 0;
	while(!q.empty()){
		int s = q.front(); q.pop();
		for (auto u : adj[s]){
			visited[u] = true;
			dist[u] = dist[s]+1;
			q.push(u);
		}
	}
}
int main(){
	freopen("data.txt","r",stdin);
	for (int i = 1; i<=2; i++){
		cin >> a >> b;
		adj[a][b] = 1;
	}
}