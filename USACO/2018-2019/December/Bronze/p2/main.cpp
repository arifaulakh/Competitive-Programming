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
int N,  s[MAXN], t[MAXN], b[MAXN], tot[MAXN], total = 0, cur = 0, fin = 0;
int main(){
    //freopen("data.txt","r",stdin);
    ofstream cout("blist.out");
    ifstream cin("blist.in");
    cin >> N;
    for (int i = 1; i<=N; i++){
        cin >> s[i] >> t[i] >> b[i];
    }
    for (int i = 1; i<=N; i++){
        for (int j = 1; j<N; j++){
            if (t[j]>t[j+1]){
                int S_temp = s[j], S= s[j+1];
                int T_temp = t[j], T = t[j+1];
                int B_temp = b[j], B = b[j+1];
                s[j+1] = S_temp, s[j] = S;
                t[j+1] = T_temp, t[j] = T;
                b[j+1] = B_temp, b[j] = B;
            }
        }
    }
    for (int i = 1; i<=N; i++){
        if (s[i]>fin){
            fin = t[i];
            if (b[i]>cur) total+=(b[i]-cur);
            cur = total;
        }
        else{
            total+=b[i];
        }
    }
    cout << total << endl;
    return 0;
}