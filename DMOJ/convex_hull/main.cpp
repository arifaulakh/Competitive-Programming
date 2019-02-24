#include<bits/stdc++.h>
using namespace std;
#define mp make_pair
#define pb push_back
#define MOD 1000000007
#define MAXN 2003
#define INF 1000000009
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

int N, M, K, A, B, dist[MAXN][201];
ll MIN = INF+1;
typedef pair<pii,int> ppi;
vector<ppi> adj[MAXN];
priority_queue<ppi, vector<ppi>, greater<ppi> > pq;
void dijkstra(int src){
    memset(dist, INF, sizeof dist);
    dist[src][0] = 0;
    pq.push(ppi(pii(0,0),src));
    while (!pq.empty()){
        ppi front = pq.top();
        pq.pop();
        pii d = front.first; int u = front.second;
        for (int i = 1; i <= (int)adj[u].size(); i++){
            ppi v = adj[u][i];
            for (int j = 0;j+v.first.second<K; j++){
                int W = dist[u][j]+ v.first.first;
                if (W<dist[v.second][j+v.first.second]){
                    dist[v.second][j+v.first.second] = W;
                    pq.push(ppi(pii(W,j+v.first.second), v.second));
                }
            }
        }
    }
}
int main(){
    freopen("data.txt","r",stdin);
    cin >> K >> N >> M;
    for (int i = 1; i<=M; i++){
        int a, b, t, h; cin >> a >> b >> t >> h;
        adj[a].pb(ppi(pii(t,h),b));
        adj[a].pb(ppi(pii(t,h),a));
    }
    cin >> A >> B;
    dijkstra(A);
    for (int i = 0; i<K;i++){
        cout << dist[B][i] << endl;
    }
    return 0;
}