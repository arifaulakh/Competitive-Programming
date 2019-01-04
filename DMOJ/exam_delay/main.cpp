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
typedef pair<double, int> pdi;
typedef map<int, int> mii;
typedef map<ll, ll> mll;
ll fpow(ll x, ll n, ll mod){if (n==0) return 1%mod; ll u = fpow(x, n/2, mod); u = (u*u)%mod; if (n%2==1)u = (u*x)%mod;return u;}
ll gcd(ll a, ll b) { return b == 0 ? a : gcd(b, a % b); }

int V, E, pre[MAXN], m, n, d, s;
double dist[MAXN];
vector<pdi>adj[MAXN];
priority_queue<pdi, vector<pdi>, greater<pdi> > pq;
void dijkstra(int src){
    memset(dist, 10000, sizeof dist);
    memset(pre, -1, sizeof pre);
    dist[src] = 0;
    pq.push(pdi(0, src));
    while (!pq.empty()){
        pdi front = pq.top();
        pq.pop();
        double d = front.first; int u = front.second;
        cout << d << endl;
        if (d > dist[u]) continue;
        for (int j = 0; j < (int)adj[u].size(); j++){
            pdi v = adj[u][j];
            if (d + v.first < dist[v.second]){
                cout << d+v.first << endl;
                dist[v.second] = d + (double)v.first;
                pq.push(pdi(dist[v.second], v.second));
                pre[v.second] = u;
            }
        }
    }
}
int main(){
    freopen("data.txt","r",stdin);
    cin >> V >> E;
    for (int i = 1; i<=E; i++){
        cin >> m >> n >> d >> s;
        double weight = (double)d*((double)60/(double)s);
        adj[m].pb(pdi(weight,n));
        adj[n].pb(pdi(weight,m));
    }
    dijkstra(1);
    // for (int i = 1;i<=V; i++){
    //     cout << dist[i] << endl;
    // }
    return 0;
}