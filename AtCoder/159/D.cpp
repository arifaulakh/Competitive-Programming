#include<bits/stdc++.h>
using namespace std;
#define mp make_pair
#define pb push_back
#define first fi
#define second se
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
 
ll N, a[MAXN], freq[MAXN];
 
int main(){
    freopen("data.txt","r",stdin);
    cin >> N;
    for (int i = 1; i<=N; i++){
        cin >> a[i];
        freq[a[i]]++;
    }
    ll total = 0;
    for (int i = 1; i<=N; i++){
      	if (freq[i] >= 2){
          total  += ((freq[i])*(freq[i]-1))/2;
        }
    }
    for (int i = 1; i<=N; i++){
        ll temp = total;
        temp -= ((freq[a[i]])*(freq[a[i]]-1))/2;
        temp += ((freq[a[i]]-1)*(freq[a[i]]-2))/2;
      	if (temp < 0) cout << 0 << endl;
        else cout << temp << endl;
    }
 
    return 0;
}