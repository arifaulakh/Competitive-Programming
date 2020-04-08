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

bool palindrome(string x){
  int l = x.length();
  for (int i = 0; i<(l+1)/2; ++i){
    if (x[i] != x[l-1-i]) return false;
  }
  return true;
}
int main(){
    freopen("data.txt","r",stdin);
    cin >> s;
    bool pali = true;
    if (!palindrome(s)) pali = false;
    string str_1 = "";
    int l = s.length();
    for (int i = 0; i< (l-1)/2; ++i){
        str_1 += s[i];
    }
    if (!palindrome(str_1)) pali = false;
    string str_2 = "";
    for (int i = ((l+3)/2)-1; i < l; ++i){
        str_2 += s[i];
    }
    if (!palindrome(str_2)) pali = false;
    if (pali) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}