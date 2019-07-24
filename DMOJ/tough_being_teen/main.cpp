#include<bits/stdc++.h>
using namespace std;
const int MAXN = 20;
vector<int> adj[MAXN], sorted;
int dist[MAXN], MIN = 8, visited[MAXN];
bool f = false;
void dfs(int u){
	if (visited[u]==1){
		f = true;
		return;
	}
	if (visited[u]==2) return;
	visited[u] = 1;
	for (auto j : adj[u]){
		dfs(j);
	}
	visited[u] = 2;
	sorted.push_back(u);
	// for (auto u : sorted){
	// 	cout << u << " ";
	// }
	// cout << endl;
}
void topsort(int nodes){
	memset(visited, 0, sizeof visited);
	sorted.clear();
	for (int i = 1; i <= nodes; i++){
		if (visited[i]!=2) dfs(i);
	}
	reverse(sorted.begin(), sorted.end());
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
	topsort(7);
	// for (auto u : sorted){
	// 	cout << u << " ";
	// }
	// cout << endl;
	if (f)cout << "Cannot complete these tasks. Going to bed." << endl;
	else{
		for (auto u : sorted){
			cout << u << " ";
		}
		cout << endl;
	}
	return 0;
}