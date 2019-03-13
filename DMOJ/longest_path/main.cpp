#include<bits/stdc++.h>
using namespace std;
#define mp make_pair
#define pb push_back
#define MOD 1000000007
#define MAXN 100005
#define endl "\n"
#define readln(x) getline(cin, x);
typedef long long ll;
typedef long double ld;
typedef pair<int, int>pii;
typedef pair<ll, ll> pll;
typedef map<int, int> mii;
typedef map<ll, ll> mll;
ll fpow(ll x, ll n, ll mod){if (n==0) return 1%mod; ll u = fpow(x, n/2, mod); u = (u*u)%mod; if (n%2==1)u = (u*x)%mod;return u;}
ll gcd(ll a, ll b) { return b == 0 ? a : gcd(b, a % b); }

int N, M, x, y, visited[MAXN], dp[MAXN], MAX = -1;
vector<int>adj[MAXN], par[MAXN], sorted;

void dfs(int u){
	if (visited[u]==2) return;
	visited[u] = 1;
	for (auto j : adj[u]){
		dfs(j);
	}
	visited[u] = 2;
	sorted.push_back(u);
}

void topsort(int nodes) {
	memset(visited, 0, sizeof visited);
	sorted.clear();
	for (int i = 1; i <= nodes; i++){
		if (visited[i]!=2) dfs(i);
	}
	reverse(sorted.begin(), sorted.end());
}

int main(){
    freopen("data.txt","r",stdin);
    cin >> N >> M;
    for (int i = 1; i<=M; i++){
        cin >> x >> y;
        adj[x].pb(y);
        par[y].pb(x);
    }
    topsort(N);
    for (int i = 0; i<(int)sorted.size(); i++){
        int node = sorted[i];
        for (auto u : par[node]){
            dp[node] = max(dp[node], dp[u]+1);
        }
    }
    for (int i = 1; i<=N; i++){
        MAX = max(MAX,dp[i]);
    }
    cout << MAX << endl;
    return 0;
}