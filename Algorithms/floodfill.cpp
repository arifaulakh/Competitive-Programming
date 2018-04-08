/*
Floodfill(DFS)
Input
8 8 0
0 1
0 5
1 2 
1 3
3 2
4 0
4 3
6 7

Output
Visited 5 nodes starting from 0
*/
#include<iostream>
#include<vector>
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
int main(){
	int nodes, edges, start, u, v;
	cin >> nodes >> edges >> start;
	for (int = 0; i<edges; i++){
		cin >> u >> v;
		adj[u].push_back(v);
	}
	cout << "Visited" << dfs(start) << "nodes";
	cout << "starting from " << start << endl;
	return 0;
}