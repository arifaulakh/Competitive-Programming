#include<bits/stdc++.h>
using namespace std;
#define mp make_pair
typedef pair<int, int> pii;
const int MAXN = 9;
int dist[MAXN][MAXN], a, b, c, d; 
bool visited[MAXN][MAXN];
queue<pii> q;
vector<int> x = {1, 1, -1, -1, 2, 2, -2, -2};
vector<int> y = {2,-2,2,-2,1, -1, 1, -1};

void BFS(int a, int b){
	visited[a][b] = true;
	dist[a][b] = 0;
	q.push(mp(a,b));
	while(!q.empty()){
		pii s = q.front(); q.pop();
		for (int i = 0; i<(int)x.size(); i++){
			int X = s.first+x[i], Y = s.second+y[i];
			if (X>0&&X<9&&Y>0&&Y<9){
				if (visited[X][Y])continue;
				visited[X][Y] = true;
				dist[X][Y] = dist[s.first][s.second]+1;
				q.push(mp(X,Y));
			}
		}
	}
}

int main(){
	freopen("data.txt","r",stdin);
	cin >>  a >> b;
	cin >> c >> d;
	BFS(a,b);
	cout << dist[c][d] << endl;
	return 0;
}