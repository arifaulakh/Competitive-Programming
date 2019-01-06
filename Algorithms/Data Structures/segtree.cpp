#include<bits/stdc++.h>
using namespace std;
#define mp make_pair
#define pb push_back
#define MOD 1000000007
#define MAXN 100005
#define endl "\n"
#define readln(x) getline(cin, x);
#define INF 0x3f3f3f3f
typedef long long ll;
typedef long double ld;
typedef pair<int, int>pii;
typedef pair<ll, ll> pll;
typedef map<int, int> mii;
typedef map<ll, ll> mll;
ll fpow(ll x, ll n, ll mod){if (n==0) return 1%mod; ll u = fpow(x, n/2, mod); u = (u*u)%mod; if (n%2==1)u = (u*x)%mod;return u;}
ll gcd(ll a, ll b) { return b == 0 ? a : gcd(b, a % b); }
ll t_min[4*MAXN],arr[MAXN];
int N, M;
pll t_gcd[4*MAXN];

struct node
{
    ll gcd, occ, MIN;
};
node tree[4 * MAXN], inf = {0, 0, INF};
//solution using two trees
void build_tree_min(ll a[], int v, int tl, int tr){
    if (tl==tr){
        t_min[v] = a[tl];
    }
    else{
        int tm = (tl+tr)/2;
        build_tree_min(a, v*2, tl, tm);
        build_tree_min(a, v*2+1, tm+1, tr);
        t_min[v] = min(t_min[v*2], t_min[v*2+1]);
    }
}
ll query_min(int v,int tl, int tr, int l, int r){
    if (l > r) return INF;
    if (l <= tl && r >= tr) {
        return t_min[v];
    }
    int tm = (tl + tr) / 2;
    return min(query_min(v*2, tl, tm, l, min(r, tm)),
           query_min(v*2+1, tm+1, tr, max(l, tm+1), r));
}
void update_min(int v, int tl, int tr, int pos, ll new_val){
    if (tl==tr){
        t_min[v]=new_val;
    }
    else{
        int tm = (tl+tr)/2;
        if (pos<=tm){
            update_min(v*2, tl, tm, pos, new_val);
        }
        else{
            update_min(v*2+1, tm+1, tr, pos, new_val);
        }
        t_min[v] = min(t_min[v*2], t_min[v*2+1]);
    }

}
pll combine(pll a, pll b){
	ll GCD = gcd(a.first, b.first);
    ll ans = 0;
    if (a.first==GCD)ans+=a.second;
    if (b.first==GCD)ans+=b.second;
    return mp(GCD, ans);
}
void build_tree_gcd(ll a[], int v, int tl, int tr){
    if (tl==tr){
        t_gcd[v] = mp(a[tl],1); 
    }
    else{
        int tm = (tl+tr)/2;
        build_tree_gcd(a, v*2,tl, tm);
        build_tree_gcd(a, v*2+1, tm+1, tr);
        t_gcd[v] = combine(t_gcd[v*2], t_gcd[v*2+1]);
    }
}
pll query_gcd(int v, int tl, int tr, int l, int r){
    if (l > r) return mp(0,0);
    if (l <= tl && r >= tr) {
        return t_gcd[v];
    }
    int tm = (tl + tr) / 2;
    return combine(query_gcd(v*2, tl, tm, l, min(r, tm)),
           query_gcd(v*2+1, tm+1, tr, max(l, tm+1), r));
}
void update_gcd(int v, int tl, int tr, int pos, ll new_val){
    if (tl==tr){
        t_gcd[v] =mp(new_val,1);
    }else{
        ll tm = (tl+tr)/2;
        if (pos<=tm){
            update_gcd(v*2, tl, tm, pos, new_val);
        }
        else{
            update_gcd(v*2+1, tm+1, tr, pos, new_val);
        }
        t_gcd[v] =combine(t_gcd[v*2], t_gcd[v*2+1]);
    }
}
//solution use struct and only one tree
node combine(node a, node b){
    node c;
    c.MIN = min(a.MIN, b.MIN);
    c.gcd = gcd(a.gcd, b.gcd);
    ll ans = 0;
    if (c.gcd==a.gcd)ans+=a.occ;
    if (c.gcd==b.gcd)ans+=b.occ;
    c.occ = ans;
    return c;
}
void build(ll a[], int v, int tl, int tr){
    if (tl==tr){
        tree[v].occ = 1;
        tree[v].gcd = a[tl];
        tree[v].MIN = a[tl];
    }
    else{
        int tm = (tl+tr)/2;
        build(a, v*2,tl, tm);
        build(a, v*2+1, tm+1, tr);
        tree[v] = combine(tree[v*2], tree[v*2+1]);
    }
}
node query(int v, int tl, int tr, int l, int r){
    if (l > r) return inf;
    if (l <= tl && r >= tr) {
        return tree[v];
    }
    int tm = (tl + tr) / 2;
    return combine(query(v*2, tl, tm, l, min(r, tm)),
           query(v*2+1, tm+1, tr, max(l, tm+1), r));
}
void update(int v, int tl, int tr, int pos, ll new_val){
    if (tl==tr){
        tree[v].gcd=new_val;
        tree[v].MIN = new_val;
        tree[v].occ = 1;
    }else{
        ll tm = (tl+tr)/2;
        if (pos<=tm){
            update(v*2, tl, tm, pos, new_val);
        }
        else{
            update(v*2+1, tm+1, tr, pos, new_val);
        }
        tree[v] =combine(tree[v*2], tree[v*2+1]);
    }
}
