#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> pll;
const ll MAXN = 1e6 + 6;
ll N, M, A, B, C, dist[MAXN], a[MAXN], b[MAXN], c[MAXN], par[MAXN],MAX = -1;
vector<pll> adj[MAXN];
priority_queue<pll, vector<pll>, greater<pll> > pq;
map<pll, ll> g;
void dijkstra(int src)
{
    for (int i = 1; i <= N; i++){
        dist[i] = 1e12;
        par[i] = -1;
    }
    dist[src] = 0;
    pq.push(pll(0, src));
    while (!pq.empty())
    {
        pll front = pq.top();
        pq.pop();
        int d = front.first, u = front.second;
        if (d > dist[u])
            continue;
        for (int j = 0; j < (int)adj[u].size(); j++)
        {
            pll v = adj[u][j];
            if (d + v.first < dist[v.second])
            {
                dist[v.second] = d + v.first;
                par[v.second] = u;
                pq.push(pll(dist[v.second], v.second));
            }
        }
    }
}
int main()
{
    freopen("data.txt","r",stdin);
    cin >> N >> M;
    for (int i = 1; i <= M; i++)
    {
        cin >> a[i] >> b[i] >> c[i];
        adj[a[i]].push_back(pll(c[i], b[i]));
        adj[b[i]].push_back(pll(c[i], a[i]));
        g[pll(a[i],b[i])] = i;
        g[pll(b[i],a[i])] = i;
    }
    cin >> A >> B >> C;
    dijkstra(A);
    if (dist[B]<C){
        for (int i = 1;i <=N; i++){
            if (par[i]!=-1) MAX = max(g[pll(i, par[i])], MAX);
        }
        cout << MAX << endl;
    }
    else cout << -1 << endl;
    return 0;
}