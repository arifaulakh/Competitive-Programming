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

int a[MAXN], b[MAXN], N, M, start = 1, fin = 0, MAX = 0;
int main(){
    //freopen("data.txt","r",stdin);
    ifstream cin("speeding.in");
    ofstream cout("speeding.out");
    cin >> N >> M;
    for (int i = 1; i<=N; i++){
        int seg, speed; cin >> seg >> speed;
        fin+=seg;
        for (int j = start; j<=fin; j++){
            a[j] = speed;
        }
        start = fin+1;
    }
    start = 1, fin = 0;
    for (int i = 1; i<=M; i++){
        int seg, speed; cin >> seg >> speed;
        fin+=seg;
        for (int j = start; j<=fin; j++){
            b[j] = speed;
        }
        start = fin+1;
    }
    for (int i = 1; i<=100; i++){
        if (b[i]>a[i]){
            MAX = max(MAX, b[i]-a[i]);
        }
    }
    cout << MAX << endl;
    return 0;
}