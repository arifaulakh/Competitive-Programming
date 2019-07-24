#include<bits/stdc++.h>
using namespace std;
#define mp make_pair
#define pb push_back
#define MOD 1000000007
#define MAXN 200005
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

int n, arr[MAXN], c[MAXN], s = 0, MAX = 0;
int main(){
    freopen("data.txt","r",stdin);
    cin >> n;
    for (int i = 1; i<=n; i++){
        cin >> arr[i];
    }
    for (int i = n+1; i<=2*n; i++){
        arr[i] = arr[i-n];
    }
    for (int i = 1; i<=2*n; i++){
        if (arr[i]==0){
            s = 0;
        }
        else if (arr[i]==1){
            s++;
        }
        MAX = max(MAX, s);
    }
    cout << MAX << endl;
    return 0;
}