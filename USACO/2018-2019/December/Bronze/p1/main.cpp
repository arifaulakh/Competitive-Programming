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
ll c[MAXN], a[MAXN], counter = 0;
int main(){
    //freopen("data.txt","r",stdin);
    ofstream cout("mixmilk.out");
    ifstream cin("mixmilk.in");
    for (int i = 1; i<=3; i++){
        cin >> c[i] >> a[i];
    }
    while(counter<4){
        counter++;
        if (counter%3==1){
            while(a[1]>0&&a[2]<c[2]){
                a[1]--;
                a[2]++;
            }
        }
        else if (counter%3==2){
            while (a[2]>0&&a[3]<c[3]){
                a[2]--;
                a[3]++;
            }
        }
        else{
            while(a[3]>0&&a[1]<c[1]){
                a[3]--;
                a[1]++;
            }
        }
    }
    for (int i = 1; i<=3; i++){
        cout << a[i] << endl;
    }
    return 0;
}