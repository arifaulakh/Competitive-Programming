#include<bits/stdc++.h>
using namespace std;
#define mp make_pair
#define pb push_back
#define MOD 1000000007
#define MAXN 100005
#define endl "\n"
#define readln(x) getline(cin, x);
#define INF 1000000000
typedef long long ll;
typedef long double ld;
typedef pair<int, int>pii;
typedef pair<ll, ll> pll;
typedef map<int, int> mii;
typedef map<ll, ll> mll;
ll fpow(ll x, ll n, ll mod){if (n==0) return 1%mod; ll u = fpow(x, n/2, mod); u = (u*u)%mod; if (n%2==1)u = (u*x)%mod;return u;}
ll gcd(ll a, ll b) { return b == 0 ? a : gcd(b, a % b); }
//Solution uses one tree
ll arr[MAXN];
int N, M;
struct node {
    ll gcd, occ, MIN;
};
node tree[4*MAXN], inf = {0,0,INF};

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
int main(){
    freopen("data.txt","r",stdin);
    scanf("%d%d", &N, &M);
    for (int i =1; i<=N; i++){
        scanf("%lld", &arr[i]);
    }
    build(arr, 1, 1, N);
    while(M--){
        char cmd;scanf(" %c", &cmd);
        ll a, b; scanf("%lld%lld",&a, &b);
        if (cmd=='C'){
            update(1, 1, N, a, b);
        }
        else if (cmd=='M'){
            node ans = query(1,1,N,a,b);
            printf("%lld\n",ans.MIN);
        }
        else if (cmd=='G'){
            node ans = query(1, 1,N, a, b);
            printf("%lld\n",ans.gcd);
        }
        else{
            node ans = query(1,1,N, a, b);
            printf("%lld\n",ans.occ);
        }
    }
    return 0;
}