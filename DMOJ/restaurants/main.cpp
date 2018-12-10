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

int N, T, K, V, r[MAXN], cnt = 0, val = 0;
deque<int> d;

int main(){
    freopen("data.txt","r",stdin);
    cin >> N >> T >> K >> V;
    for (int i = 1; i<=V; i++){
        int x; cin >> x;
        r[x] = 1;
    }
    for (int i = 1; i<=T; i++){
        if (r[i]==1)val++;
        else d.pb(i);
    }
    for (int i = 1; i<=N-T+1; i++){
        if (i!=1){
            val+=r[i+T-1];
            val-=r[i-1];
            if (r[i+T-1]==0)d.pb(i+T-1);
            if (d.front()<i)d.pop_front();
        }
        while(val<K){
            int x = d.back();
            d.pop_back();
            r[x]=1;
            cnt++;
            val++;

        }
        
    }
    cout << cnt << endl;
    return 0;
}