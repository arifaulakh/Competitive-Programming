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

int k;
queue<ll> q;
int main(){
    freopen("data.txt","r",stdin);
    cin >> k;
    for (int i = 1; i<=9; i++){
        q.push(i);
    }
    for (int i = 1; i<=k; i++){
        ll x = q.front();
        q.pop();
        if (i==k){
            cout << x << endl;
            return 0;
        }
        if (x % 10 != 0) q.push(10*x + (x%10) - 1);
        q.push(10*x + x%10);
        if (x%10 != 9) q.push(10*x + (x%10) + 1);
    }
    return 0;
}