#include<bits/stdc++.h>
using namespace std;
#define mp make_pair
#define pb push_back
#define MOD 1000000007
#define MAXN 21
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

int N, K, arr[MAXN];
map<pii, int> c;
int main(){
    //freopen("data.txt","r",stdin);
    ofstream cout("gymnastics.out");
    ifstream cin("gymnastics.in");
    cin >> K >> N;
    for (int i = 1; i<=N; i++){
        for (int j = i+1; j<=N; j++){
            pii num = mp(i, j);
            c[num] = 0;
        }
    }
    for (int i = 1; i<=K; i++){
        for (int j = 1; j<=N; j++){
            cin >> arr[j];
        }
        for (int j = 1; j<=N; j++){
            for (int k = j+1; k<=N; k++){
                if (c.count(mp(arr[j], arr[k])) == 1){
                    c[mp(arr[j], arr[k])] += 1;
                }
            }
        }
    }
    int cnt = 0;
    for (auto u : c){
        if (u.second == K || u.second == 0) cnt +=1;
    }
    cout << cnt << endl;
    return 0;
}