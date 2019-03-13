#include<bits/stdc++.h>
using namespace std;
#define mp make_pair
#define pb push_back
#define MOD 1000000007
#define MAXN 101
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

int n, start[MAXN], e[MAXN], k, ans = 0;
bool atend = false;
int main(){
    freopen("data.txt","r",stdin);
    cin >> n;
    for (int i = 1; i<=n; i++){
        cin >> start[i] >> e[i];
    }
    cin >> k;
    k-=1;
    if (n==1){
        cout << 1 << endl;
        return 0;
    }
    for (int i = 1 ;i<=n; i++){
        if (k>=start[i]&&k<=e[i]){
            if (k==e[i]){
                atend = true;
            }
            ans = i;
            break;
        }
    }
    if (!atend&&ans>0)ans--;
    cout << n-ans<< endl;
}