#include<iostream>
#include <vector>
using namespace std;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
vi dfs_num;
vii AdjList[10005];
int C, M, n, k, visited = 1, unvisited = -1;
void dfs(int u) {
	dfs_num[u] = visited;
	for (int i = 0; i < (int)AdjList[u].size(); i++){
		ii v = AdjList[u][i];
		if (dfs_num[v.first] == unvisited){
			dfs(v.first)
		}
	}
}
int main(){
	scanf("%d%d", &C, &M);
	for (int i = 0; i < C; i++){
		scanf("%d%d", &n, &k);
	}
	return 0;
}

