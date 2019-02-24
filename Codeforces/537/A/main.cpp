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
string s, t;
vector<char> v = {'a', 'e', 'i', 'o', 'u'};
int main(){
    freopen("data.txt","r",stdin);
    cin >> s >> t;
    if ((int)s.length()!=(int)t.length()){
        cout << "No" << endl;
    }
    else{
        for (int i = 0; i<(int)s.length(); i++){
            bool found1 = false;
            bool found2 = false;
            for (auto u : v){
                if (s[i]==u){
                    found1 = true;
                }
                if (t[i]==u){
                    found2 = true;
                }
            }
            if (found1!=found2){
                cout << "No" << endl;
                return 0;
            }
        }
        cout << "Yes" << endl;
        return 0;
    }
    return 0;
}