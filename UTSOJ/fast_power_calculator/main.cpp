#include<bits/stdc++.h>
using namespace std;
#define mp make_pair
#define pb push_back
#define MOD 1e9+7
#define endl "\n"
typedef long long ll;
typedef pair<int, int>pii;
typedef pair<ll, ll> pll;
ll fpow(ll x, ll n, ll mod){if (n==0) return 1%mod; ll u = fpow(x, n/2, mod); u = (u*u)%mod; if (n%2==1)u = (u*x)%mod;return u;}
ll gcd(ll a, ll b) { return b == 0 ? a : gcd(b, a % b); }

ll N, M;
int main(){
    freopen("data.txt","r",stdin);
    cin >> N >> M;
    cout << fpow(N, M, MOD) << endl;
    return 0;
}