#include <bits/stdc++.h>
using namespace std;
const int MAX = 18, INF = 1000000000;
typedef pair<int, int> ii;
int n, m, mem[MAX][1<<MAX];
vector<ii> adj[MAX];

int f(int x, int visit) {
	if (mem[x][visit] != -1) return mem[x][visit];

	if (x==n-1) {
		if (visit & (1<<x)) return mem[x][visit]=-INF;
		else return mem[x][visit]=0;
	}

	int ans = -INF;
	for (ii p : adj[x]) {
		int l = p.first, v = p.second;
		if (!(visit & (1 << v)))
			ans = max(ans, l + f(v, visit | 1 << x));
	}
	return mem[x][visit] = ans;
}

int main(){
  scanf("%d%d", &n, &m);
	for (int i = 0, x, y, l; i < m; ++i) {
		scanf("%d%d%d", &x, &y, &l);
		adj[x].push_back({l,y});
	}
	memset(mem, -1, sizeof mem);
	printf("%d\n", f(0, 0));
	return 0;
}