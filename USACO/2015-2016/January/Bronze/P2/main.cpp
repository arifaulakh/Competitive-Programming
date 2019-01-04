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

ll N, arr[MAXN], MAX = -1;

void visit_right(int idx){
    int radius = 0;
    int index = -1;
    while(radius+idx<=N){
        if (abs(arr[idx]-arr[idx+radius])<=radius){
            index = idx+2;
            radius++;
            idx++;
            cout << arr[idx] << endl;
        }
        else{
            break;
        }
    }
    //return index;
}
int visit_left(int idx){
    int radius = 0;
    int index = -1;
    while(idx-radius>=1){
        if (abs(arr[idx]-arr[idx-radius])<=radius){
            index = idx+radius;
            radius++;
            idx--;
        }
        else{
            break;
        }
    }
    return index;
}
// ll num(ll idx){
//     return (visit_right(idx)-visit_left(idx)+1);
// }
int main(){
    freopen("data.txt","r",stdin);
    //ifstream cin("angry.in");
    //ofstream cout("angry.out");
    cin >> N;
    for (int i = 1; i<=N; i++){
        cin >> arr[i];
    }
    sort(arr, arr+N+1);
    // for (int i = 1; i<=N; i++){
    //     //MAX = max(MAX,num(i));
    //     cout << num(i) << endl;
    // }
   // cout << visit_right(3) << endl;
   visit_right(3);
    return 0;
}