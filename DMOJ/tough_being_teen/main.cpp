#include<bits/stdc++.h>
using namespace std;
const int MAXN = 20;
vector<int> adj[MAXN];

void init(){
	adj[1] = {4,7};
	adj[2] = {1};
	adj[3] = {4,5};
}
int main(){
	freopen("data.txt","r",stdin);
	init();
	while(1){
		int a, b; cin >> a >> b;
		if (a==0) break;
		adj[a].push_back(b);
	}

	return 0;
}