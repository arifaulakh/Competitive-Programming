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
string cows[9] = {"", "Beatrice", "Belinda", "Bella", "Bessie", "Betsy", "Blue", "Buttercup", "Sue"};
vector<string> fin = {"", "Beatrice", "Belinda", "Bella", "Bessie", "Betsy", "Blue", "Buttercup", "Sue"};
map<string, int> order;
int main(){
    freopen("data.txt","r",stdin);
    // ofstream cout("lineup.out");
    // ifstream cin("lineup.in");
    for (int i = 1; i<=8; i++){
        order[cows[i]] = i;
    }
    cin >> N;
    for (int i = 1; i<=N; i++){
        string a, b, c, e, f, d; cin >> a >> b >> c >> e >> f >> d;
        int idx_a = order[a], idx_d = order[d];
        cout << idx_a << " " << idx_d << endl;
        if (abs(idx_a-idx_d)!=1){

        }
    }
    return 0;
}