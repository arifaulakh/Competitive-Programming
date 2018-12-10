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
ll N, K, arr[MAXN], num[MAXN], l = 1, cnt = 0;
unordered_map<ll,ll> freq;
int main(){
    freopen("data.txt","r",stdin);
    scanf("%lld%lld", &N, &K);
    for (int i = 1; i<=N; i++){
        scanf("%lld", &arr[i]);
    }
    for (int i = 1; i<=N; i++){
        freq[arr[i]]++;
        while((ll)freq.size()>=K&&l<=i){
            freq[arr[l]]--;
            if (freq[arr[l]]==0)freq.erase(arr[l]);
            l++;
        }
        num[i] = i-l+1;
        cnt+=num[i];
    }
    ll total = (N*N+N)/2;
    printf("%lld\n", total-cnt);
    return 0;
}