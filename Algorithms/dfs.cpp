/*
Depth First Search
Sample Input
12 11 0
0 1
0 6
0 7
1 2
1 5
2 3
2 4
7 8
7 11
8 9
8 10

Sample Output
Nodes visited: 0 1 2 3 4 5 6 7 8 9 10 11
*/
#include<vector>
using namespace std;
const int MAXN = 100;
bool visit[MAXN];
vector<int> adj[MAXN];

void dfs(int u){
	visit[u] = true;
	cout << " " << u;
	for (int i = 0; i<(int)adj[u].size();i++){
		int v = adj[u][i];
		if (!visit[v]) dfs(v);
	}
}
void dfs(int s){
	if (visited[s]) return;
	visited[s] = true;
	for (auto u : adj[s]){
		dfs(u);
	}
}
int main(){
	int nodes, edges, start, u, v;
	cin >> nodes >> edges >> start;
	for (int i = 0; i < edges; i++){
		cin >> u >> v;
		adj[u].push_back(v);
	}
	cout << "Nodes Visited:";
	dfs(start);
	cout << endl;
	return 0;
}