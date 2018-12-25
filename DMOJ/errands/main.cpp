#include<bits/stdc++.h>
using namespace std;
#define mp make_pair
#define pb push_back
#define MOD 1000000007
#define MAXN 100005
#define endl "\n"
#define println printf("\n");
#define readln(x) getline(cin, x);
typedef long long ll;
typedef long double ld;
typedef pair<int, int>pii;
typedef pair<ll, ll> pll;
typedef map<int, int> mii;
typedef map<ll, ll> mll;
ll fpow(ll x, ll n, ll mod){if (n==0) return 1%mod; ll u = fpow(x, n/2, mod); u = (u*u)%mod; if (n%2==1)u = (u*x)%mod;return u;}
ll gcd(ll a, ll b) { return b == 0 ? a : gcd(b, a % b); }

int N, M, Q, C, dist[MAXN], u, v, a, b;
bool visited[MAXN];
queue<int> q;
vector<int> adj[MAXN];
void BFS(int x){
	visited[x] = true;
	dist[x] = 0;
	q.push(x);
	while(!q.empty()){
		int s = q.front(); q.pop();
		for (auto u : adj[s]){
			if (visited[u]) continue;
			visited[u] = true;
			dist[u] = dist[s]+1;
			q.push(u);
		}
	}
}
int main(){
    freopen("data.txt","r",stdin);
    cin >> N >> M >> Q >> C;
    for (int i = 1; i<=M; i++){
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    BFS(C);
    while(Q--){
        cin >> a >> b;
        int ans = 0;
        if (!visited[a]||!visited[b]) cout << "This is a scam!" << endl;
        else cout << dist[a] + dist[b] << endl;
    }
    return 0;
}