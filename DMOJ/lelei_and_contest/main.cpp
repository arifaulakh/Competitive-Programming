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
int N, M, Q, tree[4*MAXN], arr[MAXN];

//solution using two trees
void build(int a[], int v, int tl, int tr){
    if (tl==tr){
        tree[v] = a[tl];
    }
    else{
        int tm = (tl+tr)/2;
        build(a, v*2, tl, tm);
        build(a, v*2+1, tm+1, tr);
        tree[v] = 0;
    }
}
void update(int v, int tl, int tr, int l, int r, int val){
    if (l>r)return;
    if (l==tl&&r==tr){
        tree[v] +=val;
    }
    else{
        int tm = (tl+tr)/2;
        update(v*2,tl, tm, l, min(r,tm), val);
        update(v*2+1,tm+1, tr, max(l,tm+1), r, val);
    }
}
int sum(int v, int tl, int tr, int l, int r){
    if (l>r)return 0;
    if (l<=tl&&r>=tr)return tree[v];
    int tm = (tl+tr)/2;
    return sum(v*2, tl, tm, l, min(r,tm))+sum(v*2+1, tm+1, tr, max(l,tm+1),r);
}
int main(){
    freopen("data.txt","r",stdin);
    cin >> M >> N >> Q;
    for (int i = 1; i<=N; i++){
        cin >> arr[i];
    }
    build(arr, 1,1, N);
    while(Q--){
        int c; cin >> c;
        if (c==1){
            int a,b,x; cin >> a >> b >> x;
            update(1,1,N,a,b,x);
        }
        else{
            int a,b; cin >> a >> b;
            int ans = sum(1,1,N, a,b);
            cout << ans << endl;
        }
    }
    return 0;
}

