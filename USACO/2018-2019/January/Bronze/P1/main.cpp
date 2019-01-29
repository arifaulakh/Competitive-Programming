#include<bits/stdc++.h>
using namespace std;
#define mp make_pair
#define pb push_back
#define MOD 1000000007
#define MAXN 101
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
int N, loc[4], a[MAXN], b[MAXN], g[MAXN], ONE = 0, TWO = 0, THREE = 0;
// int one(){
//     memset(loc, 0, sizeof loc);
//     int cnt = 0;
//     a[1] = 1;
//     for (int i = 1; i<=N; i++){
//         int start = loc[a[i]], end = loc[b[i]];
//         loc[b[i]] = start, loc[a[i]] = end;
//         if (loc[g[i]]==1)cnt++;
//     }
//     return cnt;
// }
// int two(){
//     memset(loc, 0, sizeof loc);
//     int cnt = 0;
//     a[2] = 1;
//     for (int i = 1; i<=N; i++){
//         int start = loc[a[i]], end = loc[b[i]];
//         loc[b[i]] = start, loc[a[i]] = end;
//         if (loc[g[i]]==1)cnt++;
//     }
//     return cnt;
// }
// int three(){
//     memset(loc, 0, sizeof loc);
//     int cnt = 0;
//     a[3] = 1;
//     for (int i = 1; i<=N; i++){
//         int start = loc[a[i]], end = loc[b[i]];
//         loc[b[i]] = start, loc[a[i]] = end;
//         if (loc[g[i]]==1)cnt++;
//     }
//     return cnt;
// }

int main(){
    //freopen("data.txt","r",stdin);
    ifstream cin("shell.in");
    ofstream cout("shell.out");
    cin >> N;
    for (int i = 1; i<=N; i++){
        cin >> a[i] >> b[i] >> g[i];
    }
    //cout << max(one(), max(two(), three())) << endl;
    //if starts at p1
    memset(loc, 0, sizeof loc);
    loc[1] = 1;
    for (int i = 1; i<=N; i++){
        int start = loc[a[i]], end = loc[b[i]];
        loc[b[i]] = start, loc[a[i]] = end;
        if (loc[g[i]]==1)ONE++;
    }
    memset(loc, 0, sizeof loc);
    loc[2] = 1;
    for (int i = 1; i<=N; i++){
        int start = loc[a[i]], end = loc[b[i]];
        loc[b[i]] = start, loc[a[i]] = end;
        if (loc[g[i]]==1)TWO++;
    }
    memset(loc, 0, sizeof loc);
    loc[3] = 1;
    for (int i = 1; i<=N; i++){
        int start = loc[a[i]], end = loc[b[i]];
        loc[b[i]] = start, loc[a[i]] = end;
        if (loc[g[i]]==1)THREE++;
    }
    cout << max(ONE, max(TWO, THREE)) << endl;
    return 0;
}