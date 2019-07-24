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

int n,m,a,b,idx;queue<int> arr[1001];vector<pair<int,int> > buses;
bool stop[1001];vector<int> pass[1001];

int main(){
    freopen("data.txt","r",stdin);
    scanf("%d%d",&n,&m);
    for(int i = 0;i<n;i++){
        scanf("%d%d",&a,&b);arr[a].push(b);
    }
    for(int i = 0;i<10*n/40+1;i++){
        if(i%10 == 0){buses.push_back({idx++,1});}
        for(int j = 0;j<buses.size();j++){
            if(stop[buses[j].first]){
                stop[buses[j].first]= 0;
                while(pass[buses[j].first].size()<40){
                    pass[buses[j].first].push_back(arr[buses[j].second].front());arr[buses[j].second].pop();
                }
                continue;
            }
            for(int r = 0;r<pass[buses[j].first].size();j++){
                if(pass[buses[j].first][r] == buses[j].second){
                    pass[buses[j].first].pop(r);
                }
            }
            buses[j].second++;
            if(buses[j].second == n-1){
                printf("Bus #%d\n ",buses[j].first);
                buses.pop(j);
            }
        }
    }
}
