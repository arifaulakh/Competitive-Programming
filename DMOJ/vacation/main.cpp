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

int N, a[MAXN],b[MAXN],c[MAXN], dp[MAXN][4], curr = -1;
int main(){
    freopen("data.txt","r",stdin);
    cin >> N;
    for (int i = 1; i<=N; i++){
        cin >> a[i] >> b[i] >> c[i];
    }
    dp[1][1] = a[1], dp[1][2] = b[1], dp[1][3] = c[1];
    for (int i = 2; i<=N; i++){
        dp[i][1] = max(dp[i-1][2], dp[i-1][3])+a[i];
        dp[i][2] = max(dp[i-1][1], dp[i-1][3])+b[i];
        dp[i][3] = max(dp[i-1][1], dp[i-1][2])+c[i];
    }
    cout << max(dp[N][1], max(dp[N][2], dp[N][3])) << endl;
    return 0;
}