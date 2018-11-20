#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1001, FMAX = 1e6 + 1;
vector<int> adj[MAXN];
int N, Q, v[MAXN], a, x, y, par[MAXN], freq[FMAX];
vector<int> num;
void dfs(int u, int p){
	par[u] = p;
	for (int v : adj[u]) {
		if (v!=p) {
			dfs(v, u);
		}
	}
}
int main(){
	freopen("data.txt","r",stdin);
	cin >> N >> Q;
	for (int i = 1; i <= N; i++){
		cin >> v[i];
	}
	for (int i = 1; i < N; i++){
		int a, b;
		cin >> a >> b;
		adj[a].push_back(b);
		adj[b].push_back(a);
	}
	for (int i = 1; i <= Q; i++){
		cin >> a >> x >> y;
		dfs(y, -1);
		vector<int> path;
		for (int z = x; z != -1; z = par[z]) path.push_back(z);
		for (auto u : path) num.push_back(v[u]);
		int length = (int)num.size();
		sort(num.begin(), num.begin() + length);
		if (a == 1)
		{
			int cnt = 0;
			for (auto u : num)cnt += u;
			cout << round((double)cnt / (double)length) << endl;
		}
		if (a == 2)
		{
			if (length % 2 == 0)
			{
				int c = length / 2;
				int d = c - 1;
				int s = num[c] + num[d];
				cout << round((double)s / (double)2) << endl;
			}
			else
			{
				int idx = (length - 1) / 2;
				cout << num[idx] << endl;
			}
		}
		if (a == 3)
		{
			memset(freq, 0, sizeof freq);
			for (auto u : num)
			{
				freq[u]++;
			}
			int m = num[length - 1];
			int MAX = 0, mode = 0;
			for (int j = 1; j <= m; j++)
			{
				if (MAX < freq[j])
				{
					MAX = freq[j];
					mode = j;
				}
				else if (MAX == freq[j])
				{
					mode = min(mode, j);
				}
			}
			cout << mode << endl;
		}
		num.clear();
	}
	return 0;
}