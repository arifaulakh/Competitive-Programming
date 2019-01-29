#include<bits/stdc++.h>
using namespace std;
#define mp make_pair
#define pb push_back
#define MOD 1000000007
#define MAXN 1000006
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

int L, W, sx = 10, sy = 10, lx = 0, ly = 0;
int X1, X2, Y1, Y2;
int main(){
    //ifstream cin("square.in");
    //ofstream cout("square.out");
    freopen("data.txt","r",stdin);
    for (int i = 1; i<=2; i++){
        cin >> X1 >> Y1 >> X2 >> Y2;
        if (X1<sx)sx = X1;
        if (Y1<sy)sy = Y1;
        if (X2>lx)lx = X2;
        if (Y2>ly)ly = Y2;
    }
    L = abs(lx-sx), W = abs(ly-sy);
    int ans = max(L, W);
    cout << ans*ans << endl;
    return 0;
}