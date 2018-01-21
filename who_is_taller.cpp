#include<iostream>
#include<cstring>
#include<vector>
using namespace std;
const int MAXN = 1e6+1;
vector<int> adj[MAXN];
int N, M;
bool visit[MAXN];
bool dfs(int u, int dest){
	if (u == dest) return true;
	visit[u] = true;
	for (int i = 0; i<adj[u].size();i++){
		int v = adj[u][i];
		if(!visit[v]){
			if(dfs(v, dest)) return true;		
		}
	}
	return false;
}
int main(){
	scanf("%d%d", &N, &M);
	for (int i = 0; i<M; i++){
		int x, y; scanf("%d%d", &x, &y);
		adj[y].push_back(x);
	}
	int p, q; scanf("%d%d", &p, &q);
	if (dfs(p,q)){
		printf("no\n");
		return 0;
	}
	memset(visit, 0, sizeof visit);
	if(dfs(q,p)){
		printf("yes\n");
		return 0;
	}
	printf("unknown\n");
	
	return 0;
}
