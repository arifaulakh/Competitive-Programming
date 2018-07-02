#include<bits/stdc++.h>
using namespace std;
const int MAXN = 20;
vector<int> adj[MAXN];
bool visited[MAXN];
vector<int> visit;

void dfs(int x){
	visited[x] = true;
	for (auto u : adj[x]){
		if (visited[u])return;
		visited[u] = true;
		visit.push_back(u);
		dfs(u);
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
	dfs(1);
	bool vis = true;
	for (int i = 1; i<=7; i++){
		if (!visited[i]) vis = false;
	}
	if (vis){
		for (auto u : visit){
			cout << u << " ";
		}
	}
	return 0;
}