#include<bits/stdc++.h>
using namespace std;
const int MAXN = 9;
vector<int> adj[MAXN*MAXN];
int board[MAXN][MAXN],dist[MAXN]; 
bool visited[MAXN];
queue<int> q;

void bfs(int x){
	visited[x] = true;
	dist[x] = 0;
	while(!q.empty()){
		int s = q.front(); q.pop();
		for (auto u : adj[s]){
			visited[u] = true;
			dist[u] = dist[s]+1;
			q.push(u);
		}
	}
}
int main(){
	freopen("data.txt","r",stdin);
	int start_x, start_y; cin >> start_x >> start_y;
	board[start_x][start_y] = 1;
	int final_x, final_y; cin >> final_x >> final_y;
	board[final_x][final_y] = 1;
	
	return 0;
}