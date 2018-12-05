#include<bits/stdc++.h>
using namespace std;
const int MAXN = 100;
vector<bool> vis(MAXN);
vector<int> adj[MAXN];

int dfs(int u) {
	vis[u] = true;
	int area = 1;
	for (int i = 0; i < (int)adj[u].size();i++){
		if (!vis[adj[u][i]]){
			area+=dfs(adj[u][i]);
		}
	}
	return area;
}