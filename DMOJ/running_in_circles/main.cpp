#include<bits/stdc++.h>
using namespace std;
const int MAXN = 101;
vector<int> adj[MAXN];
bool visited[MAXN];
int N, dis[MAXN],res, cnt = 0;
void dfs(int node, int prev){
	visited[node] = true;
	for (auto check : adj[node]){
		if (visited[check]){
			res = max(res,dis[node]-dis[check]+1);
		}
		else dfs(check,node);
	}
	visited[node] = false;
}

int main(){
	freopen("data.txt","r",stdin);
	for (int e = 1; e<=5; e++){
		cin >> N;
		for (int i = 1; i<=N; i++){
			adj[i].clear();
		}
		memset(visited, false, sizeof visited);
		for (int i = 1; i<=N; i++){
			int a, b; cin >> a >> b;
			adj[a].push_back(b);
		}
	}
	return 0;
}