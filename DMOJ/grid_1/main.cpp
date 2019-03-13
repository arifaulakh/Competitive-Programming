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

char arr[MAXN][MAXN];
ll dp[MAXN][MAXN], H, W;
bool found = false;
int main(){
    freopen("data.txt","r",stdin);
    cin >> H >> W;
    for (int i = 1; i<=H; i++){
        for (int j = 1; j<=W; j++){
            cin >> arr[i][j];
        }
    }
    for (int i = 1; i<=H; i++){
        if (arr[i][1]=='.'&&!found){
            dp[i][1] = 1;
        }
        if (arr[i][1]=='#')found = true;
    }
    found = false;
    for (int j = 1; j<=W; j++){
        if (arr[1][j]=='.'&&!found){
            dp[1][j] = 1;
        }
        if (arr[1][j]=='#')found = true;
    }
    for (int i = 2; i<=H; i++){
        for (int j = 2; j<=W; j++){
            if (arr[i][j]=='.'){
                dp[i][j] = ((((dp[i-1][j]+MOD)%MOD)+((dp[i][j-1]+MOD)%MOD))+MOD)%MOD;
            }
        }
    }
    cout << (dp[H][W]+MOD)%MOD << endl;
    return 0;
}