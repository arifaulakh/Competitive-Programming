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
ll N, W, w[MAXN], v[MAXN], dp[MAXN][100005];
int main(){
    freopen("data.txt","r",stdin);
    cin >> N >> W;
    for (int i = 1; i<= N; i++){
        cin >> w[i] >> v[i];
    }
    //memset(dp, 1000000007, sizeof dp);
    for (int i = 1; i<= N; i++){
        for (int j = 0; j<=100000; j++){
            dp[i][j] = 1000000007;
        }
    }
    for (int i = 1; i<=N; i++){
        dp[i][v[i]] = w[i];
    }
    for (int i = 2; i<=N; i++){
        for (int j = 0; j<=100000; j++){
            dp[i][j] = min(dp[i][j], dp[i-1][j]);
            if (j>=v[i]){
                dp[i][j] = min(dp[i][j],dp[i-1][j-v[i]]+w[i]);
            }
        }
    }
    ll ans = -1;
    for (int j = 100000; j>=0; j--){
        if (dp[N][j]<=W){
            ans = j;
            break;
        }
    }
    cout << ans << endl;
    return 0;
}