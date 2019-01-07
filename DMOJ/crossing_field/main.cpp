#include<bits/stdc++.h>
using namespace std;
#define mp make_pair
#define pb push_back
#define MOD 1000000007
#define MAXN 1501
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
int N, H, arr[MAXN][MAXN];
vector<int> adj[MAXN*MAXN];
map<pii, int> idx;
bool visit[MAXN*MAXN];

void dfs(int s){
	if (visit[s]) return;
	visit[s] = true;
	for (auto u : adj[s]){
		dfs(u);
	}
}
int main(){
    //freopen("data.txt","r",stdin);
    cin >> N >> H;
    for (int i = 1; i<=N; i++){
        for (int j = 1; j<=N; j++){
            cin >> arr[i][j];
            int val = (i-1)*N+j;
            idx[mp(i,j)] = val;
        }
    }
    for (int i = 1; i<N; i++){
        for (int j = 1; j<=N; j++){
            int diff = abs(arr[i][j]-arr[i+1][j]);
            if (diff<=H){
                int start = idx[mp(i,j)]; int end = idx[mp(i+1,j)];
                adj[start].pb(end);
            }
        }
    }
    for (int i = 1; i<=N; i++){
        for (int j = 1; j<N; j++){
            int diff = abs(arr[i][j]-arr[i][j+1]);
            if (diff<=H){
                int start = idx[mp(i,j)]; int end = idx[mp(i,j+1)];
                adj[start].pb(end);
            }
        }
    }
    dfs(1);
    if(visit[N*N])cout << "yes" << endl;
    else cout << "no" << endl;
    return 0;
}