#include<bits/stdc++.h>
using namespace std;
#define mp make_pair
#define pb push_back
#define first fi
#define second se
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

int A, B, m = -1;
int main(){
    freopen("data.txt","r",stdin);
    cin >> A >> B;
    for (int i = 1; i <= 1000; i++){
        int f_1 = floor((double)i * (double)0.08);
        int f_2 = floor((double)i * (double)0.1);
        if (f_1 == A && f_2 == B){
            m = i;
            cout << i << endl;
            return 0;
        }
    }
    cout << m << endl;
    return 0;
}