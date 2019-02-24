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

string s;
double R_a, G_a, B_a, R_b, G_b, B_b;
int main(){
    freopen("data.txt","r",stdin);
    cin >> s;
    cin >> R_a >> G_a >> B_a;
    cin >> R_b >> G_b >> B_b;
    if (s=="Multiply"){
        cout << R_a*R_b << " " << G_a*G_b << " " << B_a*B_b << endl;
    }
    else if (s=="Screen"){
        double a = (double)1-((double)1-R_a)*((double)1-R_b);
        double b = (double)1-((double)1-G_a)*((double)1-G_b);
        double c = (double)1-((double)1-B_a)*((double)1-B_b);
        cout << a << " " << b << " " << c << endl;
    }
    else{
        double a, b, c;
        if (R_a<0.5) a = (double)2 * R_a*R_b;
        else a = (double)1-(double)2*((double)1-R_a)*((double)1-R_b);
        if (G_a<0.5) b = (double)2 * G_a*G_b;
        else b = (double)1-(double)2*((double)1-G_a)*((double)1-G_b);
        if (B_a<0.5) c = (double)2 * B_a*B_b;
        else c = (double)1-(double)2*((double)1-B_a)*((double)1-B_b);
        cout << a << " " << b << " " << c << endl;
    }
    return 0;
}