#include<bits/stdc++.h>
using namespace std;
#define mp make_pair
#define pb push_back
#define MOD 1000000007
#define MAXN 44725
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

ll N, K, T, t[MAXN], ps[MAXN];
int main(){
    freopen("data.txt","r",stdin);
    for (int i = 1; i<=MAXN; i++){
        t[i] = (i*(i+1))/2;
        ps[i] = t[i]+ps[i-1];
    }
    cin >> T;
    while(T--){
        cin >> N >> K;
        N-=K;
        ll idx = -1;
        for (int i = 1; i<=MAXN; i++){
            if (ps[i]>N){
                idx = i-1;
                break;
            }
        }
        cout << ps[idx] << endl;
    }
    return 0;
}
