#include <bits/stdc++.h>
using namespace std;
int N, M, x, y;
const int MAXN = 51;
int edges[MAXN][MAXN];
vector<pair<int, int>> p;
bool visited[MAXN];

void dfs(int u){
	visited[u] = 1;
	for (int i = 1; i<=N; i++){
		if (!visited[i]&&edges[u][i]) dfs(i);
	}
}
int main(){
	cin >> N >> M;
	for (int i = 0; i<M; i++){
		cin >> x >> y; 
		edges[x][y] = 1;
		p.push_back(make_pair(x,y));
	}
	for (int i = 0; i<M; i++){
		memset(visited,0, sizeof visited);
		int a = p[i].first, b = p[i].second;
		edges[a][b] = 0;
		dfs(1);
		if (visited[N]) cout << "YES" << endl;
		else cout << "NO" << endl;
        edges[a][b] = 1;
	}
	return 0;
}