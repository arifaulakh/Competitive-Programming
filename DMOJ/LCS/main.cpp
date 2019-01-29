#include<bits/stdc++.h>
using namespace std;
#define mp make_pair
#define pb push_back
#define MOD 1000000007
#define MAXN 3003
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
string s, t, X[MAXN], Y[MAXN];
int C[MAXN][MAXN];

string LCS(int i, int j){
    if (i==0||j==0)return "";
    if (X[i]==Y[j])return LCS(i-1,j-1)+X[i];
    if (C[i][j-1]>C[i-1][j])return LCS(i,j-1);
    return LCS(i-1,j);
}
int main(){
    freopen("data.txt","r",stdin);
    cin >> s >> t;
    for (int i = 0; i<(int)s.length(); i++){
        X[i+1] = s[i];
    }
    for (int i = 0; i<(int)t.length(); i++){
        Y[i+1] = t[i];
    }
    for (int i = 1; i<=(int)s.length(); i++){
        for (int j =1; j<=(int)t.length(); j++){
            if (X[i]==Y[j]){
                C[i][j] = C[i-1][j-1]+1;
            }
            else{
                C[i][j] = max(C[i][j-1], C[i-1][j]);
            }
        }
    }
    cout << LCS((int)s.length(), (int)t.length()) << endl;
    return 0;
}