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

int N, M;
double arr[MAXN][MAXN], S = 0;
int main(){
    freopen("data.txt","r",stdin);
    cin >> N >> M;
    for (int i = 1; i<=N; i++){
        for (int j = 1; j<=M; j++){
            cin >> arr[i][j];
            S+=arr[i][j];
        }
    }
    double total = (double)N*(double)M;
    if ((double)S/(double)total==0.48){
        cout << "correctly exposed" << endl;
    }
    else{
        if ((double)S/(double)total<0.48){
            cout << "underexposed" << endl;
            double MIN = 1.01, s = 0;
            int c = 0;
            for (int i = 1; i<=N; i++){
                for (int j = 1; j<=M; j++){
                    MIN = min(MIN, arr[i][j]);
                    if (arr[i][j]<=0.48){
                        c++;
                        s+=arr[i][j];
                    }
                }
            }
            double Target = (double)6*.48-(total-c);
            cout << Target/s << endl;

        }
        else{
            cout << "overexposed" << endl;
            cout << "underexposed" << endl;
            double MIN = 1.01, s = 0;
            int c = 0;
            for (int i = 1; i<=N; i++){
                for (int j = 1; j<=M; j++){
                    MIN = min(MIN, arr[i][j]);
                    if (arr[i][j]<=0.48){
                        c++;
                        s+=arr[i][j];
                    }
                }
            }
            double Target = (double)6*.48-(total-c);
            cout << Target/s << endl;

        }
    }
    return 0;
}