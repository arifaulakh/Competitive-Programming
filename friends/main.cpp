#include<iostream>
#include <vector>
using namespace std;
typedef pair<int, int> ii;
typedef vector<ii> vii;
vector<int> edges[9999];
bool visited[9999];

int C, M, n, k;
void dfs(int u) {
	visited[u] = true;
	for (int i = 0; i<edges[u].size();i++){
		int v = edges[u][i];
		if(!visited[edges[u][i]]){
			dfs(edges[u][i]);
		}
	}
}
int main(){
	int n; scanf("%d", &n);
	for (int i = 0; i<n; i++){
		int x, y; scanf("%d%d", &x, &y);
		edges[x].push_back(y);
	}
	while(1){
		int a, b; scanf("%d%d", &a, &b);

	}
	return 0;
}

