#include<bits/stdc++.h>
using namespace std;
typedef pair<int, int> pii;
const int MAXN = 9;
int board[MAXN][MAXN],dist[MAXN*MAXN], curr = 0, a, b, c, d; 
bool visited[MAXN*MAXN];
queue<int> q;
map<pii, int> nodes;
vector<int> adj[MAXN*MAXN];
vector<int> x = {1, 1, -1, -1, 2, 2, -2, -2};
vector<int> y = {2,-2,2,-2,1, -1, 1, -1};

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
void move(int a, int b){
	for (int i = 0; i<(int)x.size(); i++){
		int X = a+x[i], Y = b+y[i];
		if (X>=1&&X<=8&&Y>=1&&Y<=8){
			board[X][Y] = 1;
			move(X, Y);
		}
	}
}
int main(){
	freopen("data.txt","r",stdin);
	cin >>  a >> b;
	cin >> c >> d;
	move(a,b);
	// int start = nodes[make_pair(a,b)], end = nodes[make_pair(c,d)];
	// bfs(start);
	// for (auto u : nodes){
	// 	cout << u.second << endl;
	// }
	for (int i = 1; i<=8; i++){
		for (int j = 1; j<=8; j++){
			cout << board[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}