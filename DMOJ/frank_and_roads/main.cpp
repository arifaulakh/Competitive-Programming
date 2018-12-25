#include<bits/stdc++.h>
using namespace std;
#define mp make_pair
#define pb push_back
#define MOD 1000000007
#define MAXN 2003
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

int T, N, M, G, A, B, L, dist[MAXN], stores[MAXN], cnt = 0;
vector<pii> adj[MAXN];
priority_queue<pii, vector<pii>, greater<pii> > pq;
void dijkstra(int src){
    memset(dist, 1000006, sizeof dist);
    dist[src] = 0;
    pq.push(pii(0, src));
    while (!pq.empty()){
        pii front = pq.top();
        pq.pop();
        int d = front.first, u = front.second;
        if (d > dist[u])
            continue;
        for (int j = 0; j < (int)adj[u].size(); j++)
        {
            pii v = adj[u][j];
            if (d + v.first < dist[v.second])
            {
                dist[v.second] = d + v.first;
                pq.push(pii(dist[v.second], v.second));
            }
        }
    }
}
int main(){
    freopen("data.txt","r",stdin);
    cin >> T >> N >> M >> G;
    for (int i = 1; i<=G; i++){
        cin >> stores[i];
    }
    for (int i = 1; i<=M; i++){
        cin >> A >> B >> L;
        adj[A].push_back(pii(L, B));
    }
    dijkstra(0);
    for (int i = 1; i<=G; i++){
        if (dist[stores[i]]<T)cnt++;
    }
    cout << cnt << endl;
    return 0;
}