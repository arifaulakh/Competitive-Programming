#include<bits/stdc++.h>
using namespace std;
const int MAXN = 9;
int adj[MAXN][MAXN], a, b;
int main(){
	freopen("data.txt","r",stdin);
	for (int i = 1; i<=2; i++){
		cin >> a >> b;
		adj[a][b] = 1;
	}
}