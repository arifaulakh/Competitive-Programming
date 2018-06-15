#include <bits/stdc++.h>
using namespace std;
const int MAXN = 5e3+1, INF = 1e9+1;
typedef pair<int, int> ii;
vector<ii> adj[MAXN];
int N, M, dist1[MAXN],dist2[MAXN];
priority_queue<ii,vector<ii>,greater<ii> >pq;
void sp(){
	for (int i = 1; i<=N; i++){
		dist1[i] = INF, dist2[i]=INF+1;
	}
	dist1[1] = 0;
	pq.push({0,1});
	while(!pq.empty()){
		ii front = pq.top();pq.pop();
		int d = front.first, u = front.second;
		if (d>=dist2[u]) continue;
		else if (d>dist1[u]) dist2[u] = d;
		else if (d<dist1[u]){
			dist2[u] = dist1[u];
			dist1[u] = d;
		}
		for (auto j : adj[u]) pq.push({j.first+d,j.second});

	}

}
int main(){
	freopen("data.txt", "r", stdin);
	cin >> N >> M;
	for (int i = 0; i<M; i++){
		int a, b, w;
		cin >> a >> b >> w;
		adj[a].push_back({w,b});
		adj[b].push_back({w,a});
	}
	sp();
	cout << dist2[N] << endl;

}