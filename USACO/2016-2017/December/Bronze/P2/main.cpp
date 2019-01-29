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
int N, freq[27];
vector<string> names;
string alphabet = "abcdefghijklmnopqrstuvwxyz";
map<char, int> idx;

int freq_letter(string x, string y, char c){
    int cnt_x = 0, cnt_y = 0;
    for (int i = 0; i<(int)x.length(); i++){
        if (x[i]==c)cnt_x++;
    }
    for (int i = 0; i<(int)y.length(); i++){
        if (y[i]==c)cnt_y++;
    }
    return max(cnt_x, cnt_y);

}
int main(){
    //ifstream cin("blocks.in");
    //ofstream cout("blocks.out");
    freopen("data.txt","r",stdin);
    for (int i = 0; i<(int)alphabet.length(); i++){
        idx[alphabet[i]] = i+1;
    }
    cin >> N;
    for (int i = 1; i<=N; i++){
        string a, b; cin >> a >> b;
        for (int i = 0; i<26; i++){
            int ans = freq_letter(a, b, alphabet[i]);
            freq[i+1] += ans;
        }
        
    }
    for (int i = 1; i<=26; i++){
        cout << freq[i] << endl;
    }
    return 0;
}