#include<bits/stdc++.h>
using namespace std;
const int MAXN = 20;
vector<int> adj[MAXN];
int dist[MAXN], MIN = 8;
vector<int> nodes, path;
bool visited[MAXN];
queue<int> q;

void BFS(int x){
	memset(visited,false,sizeof visited);
	memset(dist,0,sizeof dist);
	visited[x] = true;
	dist[x] = 0;
	q.push(x);
	while (!q.empty())
	{
		int s = q.front();
		nodes.push_back(s);
		q.pop();
		for (auto u : adj[s])
		{
			if (visited[u])
				continue;
			visited[u] = true;
			dist[u] = dist[s] + 1;
			q.push(u);
		}
	}
}
void init(){
	adj[1] = {4,7};
	adj[2] = {1};
	adj[3] = {4,5};
}
int main(){
	freopen("data.txt","r",stdin);
	init();
	while(1){
		int a, b; cin >> a >> b;
		if (a==0) break;
		adj[a].push_back(b);
	}
	for (int i = 1; i<=7; i++){
		BFS(i);
		for (auto u : nodes) cout << u << " ";
		cout << endl;
		nodes.clear();
	}
	return 0;
}