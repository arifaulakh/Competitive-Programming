#include<bits/stdc++.h>
using namespace std;
#define mp make_pair
#define pb push_back
#define MOD 1000000007
#define MAXN 1003
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

string a, b;
int D, I, R, dp[MAXN][MAXN];
int main(){
    freopen("data.txt","r",stdin);
    cin >> D >> I >> R;
    cin >> a >> b;
    int A = (int)a.size(), B = (int)b.size();
    for (int i = 1; i<=(int)b.size(); i++){
        dp[i][0] = I*i;
    }
    for (int j = 1; j<=(int)a.size(); j++){
        dp[0][j] = D*j;
    }
    for (int i = 1; i<=(int)b.size(); i++){
        for (int j = 1; j<=(int)a.size(); j++){
            if (b[i-1]==a[j-1]){
                dp[i][j] = dp[i-1][j-1];
            }
            else{
                dp[i][j] = min(dp[i-1][j]+I, min(dp[i][j-1]+D, dp[i - 1][j - 1]+R));
            }
        }
    }
    cout << dp[B][A] << endl;
    return 0;
}