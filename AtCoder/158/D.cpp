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

string s;
int q;
vector<char> e[2];
bool rev = false;
int main(){
    freopen("data.txt","r",stdin);
    cin >> s >> q;
    while(q--){
        int t; cin >> t;
        if (t == 1){
            if (!rev) rev = true;
            else rev = false;
        }
        else{
            int f; char c; cin >> f >> c;
            if (f == 1){
                if (rev){
                    e[1].pb(c);
                }
                else e[0].pb(c);
            }
            else{
                if (rev){
                    e[0].pb(c);
                }
                else e[1].pb(c);
            }

        }
    }
    string sta = "";
    for (int i = (int)e[0].size() - 1; i >= 0; --i){
        sta += e[0][i];
    }
    string en = "";
    for (auto c : e[1]){
        en += c;
    }
    s += en;
    sta += s;
    if (rev) reverse(sta.begin(), sta.end());
    cout << sta << endl;
    return 0;
}