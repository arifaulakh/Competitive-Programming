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

int N;
string a;
int main(){
    //freopen("data.txt","r",stdin);
    ofstream cout("whereami.out");
    ifstream cin("whereami.in");
    cin >> N;
    cin >> a;
    int k = 1;
    while (k<N){
        vector<string> total;
        set<string> unique;
        for (int i = 0; i<(int)a.length() && i+k <=(int)a.length(); i++){
            string s = "";
            for (int j = i; j<i+k; j++){
                s += a[j];
            }
            total.pb(s);
            unique.insert(s);
        }
        if ((int)total.size() == (int)unique.size()){
            cout << k << endl;
            return 0;
        }
        k+=1;
    }
    return 0;
}