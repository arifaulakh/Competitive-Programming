#include<bits/stdc++.h>
using namespace std;
const int MAXN = 1001;
vector<int> adj[MAXN];
bool visited[MAXN];
int dist[MAXN];
queue<int> q;

void BFS(int x){
    //memset(visited,false,sizeof visited); 
    //memset(dist,0,sizeof dist);
    //Only memset if BFS is being called more than once
	visited[x] = true;
	dist[x] = 0;
	q.push(x);
	while(!q.empty()){
		int s = q.front(); q.pop();
		for (auto u : f[s]){
			if (visited[u]) continue;
			visited[u] = true;
			dist[u] = dist[s]+1;
			q.push(u);
		}
	}
}