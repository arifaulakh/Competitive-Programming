#include<bits/stdc++.h>
using namespace std;
#define mp make_pair
#define pb push_back
#define MOD 1000000007
#define MAXN 100005
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

ll n, k, m, arr[MAXN], s = 0, curr_k = 0, operations = 0, N;
int main(){
    freopen("data.txt","r",stdin);
    cin >> n >> k >> m;
    for (int i = 1; i<=n; i++){
        cin >> arr[i];
        s+=arr[i];
    }
    N = n;
    sort(arr, arr+n+1);
    ll mid = (int)round((double)n/(double)2);
    for (int i = 1; i<=mid; i++)
    {
        s-=arr[i];
        N--;
    }
    for (int i = n; i>=mid+1; i--){
        if (m>0){
            s+=min(k,m);
            if (k>m)m = 0;
            else m-=k;
        }
    }
    cout << (double)s/(double)N << endl;
    return 0;
}