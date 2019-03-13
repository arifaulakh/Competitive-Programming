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
int T, N;
int main(){
    freopen("data.txt","r",stdin);
    for (int e = 1; e<=2; e++){
        cin >> T >> N;
        char arr[N+1];
        for (int i = 1; i<=N; i++){
            cin >> arr[i];
        }
        int idx = 0;
        for (int i = 1; i<=N; i++){
            if (arr[i]=='B'){
                if (idx<=i)idx = i+T-1;
            }
            else{
                idx = idx+T-1;
            }
        }
        if (idx>=N)cout << idx-N-1 << endl;
        else cout << 0 << endl;
    }
    return 0;
}