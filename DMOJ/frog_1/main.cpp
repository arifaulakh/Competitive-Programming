#include<bits/stdc++.h>
using namespace std;
#define mp make_pair
#define pb push_back
#define MOD 1000000007
#define MAXN 100005
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

ll N, dp[MAXN], h[MAXN];
int main(){
    freopen("data.txt","r",stdin);
    cin >> N;
    for (int i = 1; i<=N; i++){
        cin >> h[i];
    }
    dp[2] = abs(h[2]-h[1]);
    for (int i = 3; i<=N; i++){
      ll a = dp[i-2]+abs(h[i]-h[i-2]);
      ll b = dp[i-1]+abs(h[i]-h[i-1]);
      dp[i] = min(a,b);
    }
    cout << dp[N] << endl;
    return 0;
}