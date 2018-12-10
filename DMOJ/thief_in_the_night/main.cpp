#include<bits/stdc++.h>
using namespace std;
#define mp make_pair
#define pb push_back
#define MOD 1000000007
#define MAXN 10004
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

int F, R, Q, a, b, c, A[6][MAXN], ps[6][MAXN];
int main(){
    freopen("data.txt","r",stdin);
    scanf("%d%d", &F, &R);
    for (int i = 1; i<=F; i++){
        for (int j = 1; j<=R; j++){
            scanf("%d", &A[i][j]);
            ps[i][j] = A[i][j]+ps[i][j-1];
        }
    }
    scanf("%d", &Q);
    while(Q--){
        scanf("%d%d%d", &a, &b, &c);
        printf("%d\n", ps[c][b]-ps[c][a-1]);
    }
    return 0;
}