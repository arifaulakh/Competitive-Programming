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

int n, cnt = 0;
map<char,int> freq, idx;
string s;
vector<string> options = {"RGB","RBG", "BRG", "BGR", "GBR","GRB"};
int main(){
    freopen("data.txt","r",stdin);
    cin >> n >> s;
    if (n<3){
        if (n==1){
            cout << 0 << endl;
            cout << s << endl;
        }
        else{
            if (s[0]!=s[1]){
                cout << 0 << endl;
                cout << s << endl;
            }
            else{
                if (s[0]=='B'){
                    s[1] = 'G';
                }
                else if (s[0]=='G'){
                    s[1] = 'R';
                }
                else{
                    s[1] = 'B';
                }
                cout << 1 << endl;
                cout << s << endl;
            }
        }
    }
    else{
        int idx = 0;
        for (string u : options){
            idx++;
            for (int i = 0; i<n; i+=3){
            }
        }
    }
    return 0;
}