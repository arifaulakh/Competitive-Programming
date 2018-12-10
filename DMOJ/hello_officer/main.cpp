#include<bits/stdc++.h>
using namespace std;
#define mp make_pair
#define pb push_back
#define MOD 1000000007
#define MAXN 2002
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

int N, M, B, Q, x, y, z, q;
int dist[MAXN], qval[MAXN];
vector<pii> adj[MAXN];
priority_queue<pii, vector<pii>, greater<pii> > pq;
void dijkstra(int src){
    for (int i = 1; i <= N; i++) dist[i] = (int)1e6;
    dist[src] = 0;
    pq.push(pii(0, src));
    while (!pq.empty()){
        pii front = pq.top();
        pq.pop();
        int d = front.first, u = front.second;
        if (d > dist[u]) continue;
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
    cin >> N >> M >> B >> Q;
    for (int i = 1; i<=M; i++){
        cin >> x >> y >> z;
        adj[x].pb(pii(z,y));
        adj[y].pb(pii(z,x));
    }
    dijkstra(B);
    for (int i = 1; i<=N; i++){
        if (dist[i]==(int)1e6)qval[i] = -1;
        else qval[i] = dist[i];
    }
    while(Q--){
        cin >> q;
        cout << qval[q] <<endl;
    }
    return 0;
}
