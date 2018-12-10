#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> pll;
const ll MAXN = 1e5 + 1, MAXM = 2e5+1;
ll N, M, A, B, C, dist[MAXN];
int a[MAXM], b[MAXM], c[MAXM];
vector<int> adj[MAXN];
priority_queue<pll, vector<pll>, greater<pll> > pq;

void dijkstra(ll src, ll k){
    memset(dist, 0x3f, sizeof dist);
    dist[src] = 0;
    pq.push(pll(0, src));
    while (!pq.empty()){
        pll front = pq.top();
        pq.pop();
        ll d = front.first, u = front.second;
        if (d > dist[u]) continue;
        for (int j = 0; j < (int)adj[u].size(); j++){
            ll e = adj[u][j];
            if (e > k) continue;
            ll v = a[e] == u ? b[e] : a[e];
            ll w = c[e];
            if (d + w < dist[v]){
                dist[v] = d + w;
                pq.push(pll(dist[v], v));
            }
        }
    }
}
ll f(ll x){
    dijkstra(A, x);
    if (dist[B] < C){
        return 1;
    }
    return 0;
}
int main(){
    freopen("data.txt","r",stdin);
    scanf("%lld%lld", &N, &M);
    for (int i = 1; i <= M; i++){
        scanf("%d%d%d", &a[i], &b[i], &c[i]);
        adj[a[i]].push_back(i);
        adj[b[i]].push_back(i);
    }
    scanf("%lld%lld%lld", &A, &B, &C);
    dijkstra(A, M);
    if (dist[B]>=C){
        printf("-1\n");
        return 0;
    }
    ll lo = 1, hi = M;
    while (lo < hi){
        ll k = (lo + hi) / 2;
        if (f(k)==1){
            hi = k;
        }
        else if (f(k)==0){
            lo = k + 1;
        }
    }
    printf("%lld\n", hi);
    return 0;
}