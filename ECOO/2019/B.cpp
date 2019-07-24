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

map<char,string> val;
map<char, int> um;ll arr[26][26]; int r,t;string a,b;
char c,f,l;ll freq[26],temp[26];

int main(){
    freopen("DATA21.txt","r",stdin);
    cin.sync_with_stdio(0);cin.tie(0);
    for(int z = 0;z<10;z++){
        um.clear();val.clear();
        for(int i = 0;i<26;i++){
            freq[i] = 0;temp[i] = 0;
            for(int j = 0;j<26;j++){
                arr[i][j] = 0;
            }
        }
        cin >> r >> t >> a;f = a[0];l = a[a.length()-1];
        for(int i = 0;i<a.length();i++){freq[a[i]-'A']++;}
        for(int i = 0;i<r;i++){
            cin >> c >> b;
            um[c] = i;val[c] = b;
            for(int j = 0;j<b.length();j++){
                arr[i][b[j]-'A']++;
            }
        }
        for(int i = 0;i<t;i++){
            for(int j = 0;j<26;j++){temp[j] = 0;}
            f = val[f][0];l = val[l][val[l].length()-1];
            for(int j = 0;j<26;j++){
                for(int e = 0;e<26;e++){
                    temp[e] += (arr[um[(int)(j+'A')]][e]*freq[j]);
                }
            }
            for(int j = 0;j<26;j++){
                freq[j] = temp[j];temp[j] = 0;
            }
        }
        ll ans = 0; 
        for(int i = 0;i<26;i++){
            ans += freq[i];
        }

        cout << f <<l << " " << ans << "\n"; 
    }
    return 0;
}
