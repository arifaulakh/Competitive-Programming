#include<bits/stdc++.h>
using namespace std;
#define mp make_pair
#define pb push_back
#define MOD 1000000007
#define MAXN 6003
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

int dist[MAXN], N, Q, a, b, w, u, v, d[MAXN][MAXN];
vector<pii> adj[MAXN];
priority_queue<pii, vector<pii>, greater<pii> > pq;


void dijkstra(int src){
    memset(dist, (int)1e6, sizeof dist);
    dist[src] = 0;
    pq.push(pii(0,src));
    while (!pq.empty()){
        pii front = pq.top();
        pq.pop();
        int d = front.first, u = front.second;
        if (d > dist[u])continue;
        for (int j = 0; j < (int)adj[u].size(); j++){
            pii v = adj[u][j];
            if (d + v.first < dist[v.second]){
                dist[v.second] = d + v.first;
                pq.push(pii(dist[v.second], v.second));
            }
        }
    }
}
int main(){
    freopen("data.txt","r",stdin);
    cin >> N;
    for (int i = 1; i<=N-1; i++){
        cin >> a >> b >> w;
        adj[a].push_back(pii(w, b));
        adj[b].push_back(pii(w, a));
    }
    for (int i = 0; i<N/2; i++){
        for (int j = i; j<N; j++){
            dijkstra(i);
            d[i][j] = dist[j];
            d[j][i] = dist[j];
        }
    }
    cin >> Q;
    while(Q--){
        cin >> u >> v;
        cout << d[u][v] << endl;
    }
    return 0;
}