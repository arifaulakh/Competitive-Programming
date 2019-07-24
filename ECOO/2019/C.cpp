#include<bits/stdc++.h>
using namespace std;
#define mp make_pair
#define pb push_back
#define first fi
#define second se
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

int J, W, H,start,finish,ans = -1;string s;
char c;char arr[102][102];bool e[102];bool p[102];bool b[102];

int main(){
    freopen("DATA32.txt","r",stdin);
    cin.sync_with_stdio(0);cin.tie(0);
    for (int z = 1; z<=10;z++){
        for(int i = 0;i<102;i++){e[i] = 0;b[i] = 0;p[i] = 0;}
        ans = -1;
        cin >> J >> W >> H;
        for(int i = H;i>=1;i--){
            for(int j = 1;j<=W;j++){
                cin >> arr[i][j];
                if(arr[i][j] == 'L')start = j;
                if(arr[i][j] == 'G')finish = j;
                if(arr[i][j] == '@' && i<=J+2)e[j] = 1;
                if(arr[i][j] == '.' && i<=J+2 && i>=2)p[j] = 1;
                if(arr[i][j] == '@' && i == 2)b[j] = 1;
            }
        }
        for(int i = start;i<=finish;i++){
            if(!b[i])continue;
            int idx = 0;
            for(int j = 1;j<=J+2;j++){
                if(arr[j][i] == '.'){
                    idx = j;break;
                }
            }
            if(idx == 0){
                ans = i;break;
            }
            for(int j = 1;j<=idx;j++){
                if(arr[j][i+1] == '@' || arr[j][i-1] == '@'){
                    ans = i;break;
                }
            }
            if(arr[idx][i] == '@'){
                ans = i;break;
            }
            if(ans != -1)break;
        }
        ans == -1 ? printf("CLEAR\n"):printf("%d\n",ans);
    }
    return 0;
}
