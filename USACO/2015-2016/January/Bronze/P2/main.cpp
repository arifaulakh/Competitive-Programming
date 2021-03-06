#include<bits/stdc++.h>
using namespace std;
#define mp make_pair
#define pb push_back
#define MOD 1000000007
#define MAXN 101
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

ll N, arr[MAXN];
int MAX = -1;

int visit_right(int idx){
    int radius = 1;
    int start = idx+1;
    while((arr[start]-arr[idx])<=radius&&start<N){
        radius++;
        start++;
    }
    return start;

}
int visit_left(int idx){
    int radius = 1;
    int start = idx-1;
    while((arr[idx]-arr[start])<=radius&&start>1){
        radius++;
        start--;
    }
    return start;
}
int num(int x){
    int ans = (visit_right(x)-visit_left(x))+1;
    return ans;
}
int main(){
    freopen("data.txt","r",stdin);
    //ifstream cin("angry.in");
    //ofstream cout("angry.out");
    cin >> N;
    for (int i = 1; i<=N; i++){
        cin >> arr[i];
    }
    sort(arr, arr+N+1);
    
    return 0;
}