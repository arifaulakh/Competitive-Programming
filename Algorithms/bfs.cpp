#include<bits/stdc++.h>
using namespace std;
const int MAXN = 100;
int N;
vector<int> adj[MAXN];
bool visited[MAXN];
int distance[MAXN];
void bfs(int s){
	queue<int> q;
	visited[x] = true;
	distance[x] = 0;
	q.push(x);
	while(!q.empty()){
		int s = q.front(); q.pop();
		for (auto u : adj[s]){
			if (visited[u]) continue;
			visited[u] = true;
			distance[u] = distance[s] + 1;
			q.push(u);
		}
	}
}