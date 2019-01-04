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

int b_start, b_end, s_start, s_end, g_start,g_end, p_start,p_end;
int main(){
    //freopen("data.txt","r",stdin);
    ifstream cin("promote.in");
    ofstream cout("promote.out");
    cin >> b_start >> b_end;
    cin >> s_start >> s_end;
    cin >> g_start >> g_end;
    cin >> p_start >> p_end;
    cout << (s_end+g_end+p_end)-(p_start+g_start+s_start) << endl;
    cout << (g_end+p_end)-(p_start+g_start) << endl;
    cout << (p_end)-(p_start) << endl;
    return 0;
}