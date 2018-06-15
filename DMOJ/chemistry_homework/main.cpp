#include<bits/stdc++.h>
using namespace std;
const int MAXN = 1003;
int N, M, c = 0, h = 0, ch = 413, cc = 346, cc2 = 615;
vector<int> adj[MAXN];

int energy(int a, int b){
	return 0;
}
int main(){
	cin >> N >> M;
	for (int i = 1; i<=M; i++){
		int a, b; cin >> a >> b;
		adj[a].push_back(b);
		adj[b].push_back(a);
	}


}