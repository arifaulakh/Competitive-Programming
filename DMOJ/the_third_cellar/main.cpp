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

int N, s[MAXN], a, b, ps[MAXN];
void sieve(int n){
    for (int x = 1; x<=n; x++){
        if (s[x])continue;
        for (int u = 2*x; u<=n; u+=x){
            s[u] = x;
        }
    }
}
int main(){
    freopen("data.txt","r",stdin);
    cin >> N;
    s[1] = -1;
    ps[1] = 0;
    sieve((int)1e6);
    for (int i = 2; i<=(int)1e6; i++){
        if (s[i]==0)ps[i]=ps[i-1]+1;
        else ps[i] = ps[i-1];
    }
    while(N--){
        cin >> a >> b;
        cout << ps[max(a,b)-1]-ps[min(a,b)-1] << endl;
    }
    return 0;
}