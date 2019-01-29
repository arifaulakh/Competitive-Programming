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
int M, N, K;
char arr[11][11];
int main(){
    //ifstream cin("cowsignal.in");
    //ofstream cout("cowsignal.out");
    freopen("data.txt","r",stdin);
    cin >> M >> N >> K;
    for (int i = 1; i<=M; i++){
        for (int j = 1; j<=N; j++){
            cin >> arr[i][j];
        }
    }
    for (int i = 1; i<=M; i++){
        string str;
        for (int j = 1; j<=N; j++){
            for (int e = 1; e<=K; e++){
                str+=arr[i][j];
            }
        }
        for (int j = 1; j<=K; j++){
            cout << str << endl;
        }
    }
    return 0;
}