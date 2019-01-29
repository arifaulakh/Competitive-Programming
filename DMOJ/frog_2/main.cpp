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

int N, K, dp[MAXN], h[MAXN];
int main(){
    freopen("data.txt","r",stdin);
    cin >> N >> K;
    for (int i = 1; i<=N; i++){
        cin >> h[i];
    }
    memset(dp, 1000006, sizeof dp);
    dp[1] = 0;
    for (int i = 2; i<=N; i++){
        for (int j = 1; j<=K; j++){
            if (j<=i){
                dp[i] = min(dp[i], dp[i-j]+abs(h[i]-h[i-j]));
            }
        }
    }
    for (int i = 1; i<=N; i++){
        cout << dp[i] << " ";
    }
    cout << endl;
    return 0;
}