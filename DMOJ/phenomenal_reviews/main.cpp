#include<bits/stdc++.h>
using namespace std;
#define mp make_pair
#define pb push_back
#define MOD 1000000007
#define MAXN 1003
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

int N, M, dist[MAXN], m[MAXN], MIN = 1e5+1;
bool visited[MAXN];
queue<int> q;
vector<int>adj[MAXN];
void bfs(int x){
    memset(visited,false,sizeof visited); 
    memset(dist,0,sizeof dist);
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
    cin >> N >> M;
    for (int i = 1; i<=M; i++){
        cin >> m[i];
    }
    for (int i = 1; i<N; i++){
        int a, b; cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    for (int i = 1; i<=M; i++){
        bfs(m[i]);
        for (int j = 1; j<=M; j++){
            cout << dist[m[j]] << " ";
        }
        cout << endl;
    }
    //cout << MIN << endl;
    return 0;
}