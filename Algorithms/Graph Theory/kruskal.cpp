#include<bits/stdc++.h>
using namespace std;
#define mp make_pair
#define pb push_back
#define MAXN 100005
typedef pair<int,int>pii;
typedef pair<int, pii> edge;
int N, M, parent[MAXN], rnk[MAXN];
vector<edge> edges, result;
void make_set(int v){
    parent[v] = v;
    rnk[v] = 0;
}
int find_set(int v){
    if (v==parent[v])return v;
    return parent[v] = find_set(parent[v]);
}
void union_set(int a, int b){
    int ar = find_set(a);
    int br = find_set(b);
    if (ar!=br){
        if (rnk[ar]>rnk[br]){
            parent[br] = ar;
        }
        else{
            parent[ar]=br;
            if (rnk[ar]==rnk[br])rnk[br]++;
        }
    }
}
int main(){
    //freopen("data.txt","r",stdin);
    cin >> N >> M;
    for (int i = 0; i<M; i++){
        int a, b, w; cin >> a >> b >> w;
        edges.pb(mp(w, mp(a, b)));
    }
    for (int i = 0; i<N; i++){
        make_set(i);
    }
    sort(edges.begin(), edges.end());
    int cost = 0;
    for (auto e : edges){
        if (find_set(e.second.first)!=find_set(e.second.second)){
            cost+=e.first;
            result.pb(e);
            union_set(e.second.first, e.second.second);
        }
    }
    cout << cost << endl;
    return 0;
}