#include<bits/stdc++.h>
using namespace std;
#define mp make_pair
#define pb push_back
#define MOD 1000000007
#define MAXN 7001
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

int s[MAXN],N, K, a[MAXN], cnt = 0;
void sieve(int n){
    s[1] = -1;
    for (int x = 2; x<=n; x++){
        if (s[x])continue;
        for (int u = 2*x; u<=n; u+=x){
            s[u] = x;
        }
    }
}
int main(){
    freopen("data.txt","r",stdin);
    cin >> N >> K;
    sieve(N);
    for (int i = 2; i<=N; i++){
        if (s[i]==0){
            a[i] = 1;
        }
        else{
            if (i%2==0||s[i-2]==0)a[i] = 2;
            else{
                a[i] = 3;

            } 
        }
    }
    for (int i = 1; i<=N; i++){
        if (a[i]==K)cnt++;
    }
    cout << cnt << endl;
    return 0;
}