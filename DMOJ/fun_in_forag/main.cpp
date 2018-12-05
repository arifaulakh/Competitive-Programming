#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> pll;
const ll MAXN = 1e6 + 6;
ll N, M, A, B, C, dist[MAXN], a[MAXN], b[MAXN], c[MAXN], MIN = 1e6;
vector<pll> adj[MAXN];
priority_queue<pll, vector<pll>, greater<pll> > pq;

void dijkstra(int src){
    for (int i = 1; i <= N; i++)dist[i] = 1e12;
    dist[src] = 0;
    pq.push(pll(0, src));
    while (!pq.empty()){
        pll front = pq.top();
        pq.pop();
        int d = front.first, u = front.second;
        if (d > dist[u]) continue;
        for (int j = 0; j < (int)adj[u].size(); j++){
            pll v = adj[u][j];
            if (d + v.first < dist[v.second]){
                dist[v.second] = d + v.first;
                pq.push(pll(dist[v.second], v.second));
            }
        }
    }
}
ll f(ll x){
    for (int i = 1; i <= N; i++){
        adj[i].clear();
    }
    for (int i = 1; i <= x; i++){
        adj[a[i]].push_back(pll(c[i], b[i]));
        adj[b[i]].push_back(pll(c[i], a[i]));
    }
    dijkstra(A);
    if (dist[B] < C){
        return 1;
    }
    return 0;
}
int main(){
    freopen("data.txt","r",stdin);
    cin >> N >> M;
    for (int i = 1; i <= M; i++){
        cin >> a[i] >> b[i] >> c[i];
    }
    cin >> A >> B >> C;
    for (int i = 1; i <= M; i++){
        adj[a[i]].push_back(pll(c[i], b[i]));
        adj[b[i]].push_back(pll(c[i], a[i]));
    }
    dijkstra(A);
    if (dist[B]>=C){
        cout << -1 << endl;
        return 0;
    }
    for (int i =1; i<=N; i++){
        adj[i].clear();
    }
    ll lo = 1, hi = M;
    while (lo <= hi){
        ll k = (lo + hi) / 2;
        if (f(k)==1){
            hi = k-1;
        }
        else if (f(k)==0){
            lo = k + 1;
        }
    }
    cout << hi+1 << endl;
    return 0;
}