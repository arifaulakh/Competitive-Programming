#include<bits/stdc++.h>
using namespace std;
const int MAXN = 101;
int visited[MAXN];
vector<int> adj[MAXN], sorted;

void dfs(int u){
	if (visited[u]==1){
		cout << "Not a DAG";
		return;
	}
	if (visited[u]==2) return;
	visited[u] = 1;
	for (auto j : adj[u]){
		dfs(j);
	}
	visited[u] = 2;
	sorted.push_back(u);
}

void topsort(int nodes) {
	memset(visited, 0, sizeof visited);
	sorted.clear();
	for (int i = 1; i <= nodes; i++){
		if (visited[i]!=2) dfs(i);
	}
	reverse(sorted.begin(), sorted.end());
}
