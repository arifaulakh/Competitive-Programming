#include<bits/stdc++.h>
using namespace std;
const int MAXN = 101;
vector<int> adj[MAXN];
int N, visited[MAXN], cnt = 0;
void dfs(int u){
	if (visited[u]==0)visited[u]=1;
	if (visited[u]==1)visited[u]=2;
	if (visited[u]==2)return;
	cnt++;
	for (auto x : adj[u]){
		dfs(x);
	}
}

int main(){
	freopen("data.txt","r",stdin);
	for (int e = 1; e<=5; e++){
		cin >> N;
		for (int i = 1; i<=N; i++){
			adj[i].clear();
		}
		int start = -1;
		for (int i = 1; i<=N; i++){
			int a, b; cin >> a >> b;
			if (i==1)start = a;
			adj[a].push_back(b);
		}
		dfs(start);
		cout << cnt << endl;
	}

	return 0;
}