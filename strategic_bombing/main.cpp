#include<cstring>
#include<vector>
#include<cstdio>
#include<iostream>
using namespace std;

const int MAXN = 26;
int Adj[MAXN][MAXN], visited[MAXN], c = 0;

bool roads(){
	memset(visited,0, sizeof visited);
	vector<int> s;
	s.push_back(0);
	while(!s.empty()){
		int u = s.back(); s.pop_back();
		if (u == 1) return true;
		visited[u] = 1;
		for (int i = 0; i<MAXN; i++){
			if (Adj[u][i]&&!visited[i]&& i!=u){
				s.push_back(i);
			}
		}
	}
	return false;
}
int main(){
	freopen("data.txt", "r", stdin);
	while(1){
		char u, v; cin >> u >> v;
		if (u=='*') break;
		Adj[u-'A'][v-'A'] = 1;
		Adj[v-'A'][u-'A'] = 1;
	}
	for (int i = 0; i <MAXN-1; i++){
		for (int j = i+1; j<MAXN; j++){
			if (Adj[i][j]){
				Adj[i][j] = 0;
				Adj[j][i] = 0;
				if (!roads()){
					c++;
					printf("%c%c\n", i+'A', j+'A');
				}
				Adj[i][j] = 1;
				Adj[j][i] = 1;
			}
		}
	}
	cout << "There are " << c << " disconnecting roads." << endl;

	return 0;
}