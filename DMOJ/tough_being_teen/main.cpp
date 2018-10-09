#include<bits/stdc++.h>
using namespace std;
const int MAXN = 20;
vector<int> adj[MAXN];
bool visited[MAXN], prereq[MAXN];

// void dfs(int x){
// 	visited[x] = true;
// 	for (auto u : adj[x]){
// 		if (visited[u])return;
// 		visited[u] = true;
// 		dfs(u);
// 	}
// }
void init(){
	adj[1] = {4,7};
	adj[2] = {1};
	adj[3] = {4,5};
	prereq[1] = true;
	prereq[4] = true;
	prereq[5] = true;
	prereq[7] = true;
}
int main(){
	freopen("data.txt","r",stdin);
	init();
	while(1){
		int a, b; cin >> a >> b;
		if (a==0) break;
		adj[a].push_back(b);
		prereq[b] = true;
	}
	
	for (int i = 1; i<=7; i++){
		if (prereq)
	}
	return 0;
}