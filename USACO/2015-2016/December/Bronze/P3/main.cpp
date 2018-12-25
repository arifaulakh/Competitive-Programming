#include<bits/stdc++.h>
using namespace std;
#define mp make_pair
#define pb push_back
#define MOD 1000000007
#define MAXN 1003
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

int N, M, D, S, p[MAXN], m[MAXN], t[MAXN], milk[51], person[51], sick[51], MAX = -1, occ_milk[51], s[101];
int main(){
    //freopen("data.txt","r",stdin);
    ifstream cin("badmilk.in");
    ofstream cout("badmilk.out");
    cin >> N >> M >> D >> S;
    for (int i = 1; i<=D; i++){
        cin >> p[i] >> m[i] >> t[i];
        if (occ_milk[m[i]]==0){
            occ_milk[m[i]] = i;
        }
    }
    for (int i = 1; i<=S; i++){
        cin >> person[i] >> sick[i];
        // for (int j = 1; j<=sick[i]; j++){
        //     if (s[j]==0)s[j] = 1;
        // }
        s[sick[i]] = person[i];
    }
    for (int MILK = 1; MILK<=M; MILK++){
        //find number of possibly infected people for each milkorder
        //first check whether anyone was possibly infected by the milk
        set<int> num;
        bool found = false;
        int end = occ_milk[MILK];
        int cnt = 0;
        for (int i = 1; i<=S; i++){
            int id = person[i], T = sick[i];
            for (int j = 1; j<=D; j++){
                if (m[j]==MILK){
                    if (p[j]==id&&t[j]<T){
                        cnt++; 
                    }
                }
            }
        }
        if (cnt>=S)found = true;
        if (found){
            for (int i = 1; i<=D; i++){
                if (m[i]==MILK){
                    num.insert(p[i]);
                }
            }
            milk[MILK] = (int)num.size();
            //cout << MILK << " FOUND" << endl;
        }
        else{
            milk[MILK] = 0;
        }
    }
    for (int i = 1; i<=M; i++){
        MAX = max(MAX, milk[i]);
    }
    cout << MAX << endl;
    return 0;
}