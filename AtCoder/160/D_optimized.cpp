#include<bits/stdc++.h>
using namespace std;
#define mp make_pair
#define pb push_back
#define first fi
#define second se
#define MOD 1000000007
#define MAXN 2003
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

int N, X, Y, freq[MAXN];

int main(){
    freopen("data.txt","r",stdin);
    cin >> N >> X >> Y;
    for (int i = 1; i<N; i++){
        for (int j = i+1; j<=N; j++){
            int sp = min(abs(j-i), min(abs(X-i)+1+abs(Y-j), abs(X-j)+1+abs(Y-i)));
            freq[sp]++;
        }
    }
    for (int i = 1; i<N; i++){
        cout << freq[i] << endl;
    }
    return 0;
}