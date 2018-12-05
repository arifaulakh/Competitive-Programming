#include<bits/stdc++.h>
using namespace std;
const int MAXN = 100;
bool visit[MAXN];
vector<int> adj[MAXN];

void dfs(int s){
	if (visit[s]) return;
	visit[s] = true;
	for (auto u : adj[s]){
		dfs(u);
	}
}