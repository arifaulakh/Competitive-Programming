#include<bits/stdc++.h>
using namespace std;
const int MAXN = 100;
vector<bool> visited(MAXN), done(MAXN);
vector<int> adj[MAXN], sorted;

void dfs(int u){
	if (visited[u]){
		cout << "Not a DAG";
		return 0;
	}
	if (done[u]) return;
	visited[u] = true;
	for (auto j : adj[u]){
		dfs(j);
	}
	visited[u] = false;
	done[u] = false;
	sorted.push_back(u);
}

void topsort(int nodes) {
	fill(visited.begin(), visited.end(), false);
	fill(done.begin(), done.end(), false);
	sorted.clear();
	for (int i = 0; i < nodes; i++){
		if (!done[i]) dfs(i);
	}
	reverse(sorted.begin(), sorted.end());
}
int main(){
	int nodes, edges, u, v;
	cin >> nodes >> edges;
	for (int i = 0; i < edges; i++){
		cin >> u >> v;
		adj[u].push_back(v);
	}
	topsort(nodes);
	for (int i = 0; i < (int)sorted.size(); i++){
		cout << sorted[i] << " ";
	}
	return 0;
}