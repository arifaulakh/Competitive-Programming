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

ll a, b, c, d, e, N;

ll f(ll x){
    if (x==0){
        return e;
    }
    else{
        return a*f(ceil(x/b))+c*f(ceil(x/a));
    }
}
int main(){
    freopen("data.txt","r",stdin);
    cin >> a >> b >> c >> d >> e >> N;
    cout << f(N) << endl;
    return 0;
}