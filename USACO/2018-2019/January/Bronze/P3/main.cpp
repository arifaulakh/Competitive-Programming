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

int N, MAX = 0, maxFreq = -1;
map<string,int>cnt;
vector<string> animals[MAXN];
vector<pair<string, int> > f;
string names[MAXN];
bool prop[MAXN];

bool rev(const pair<string, int> &A, const pair<string, int> &B){
    return (A.second > B.second);
}
int main(){
    freopen("data.txt","r",stdin);
    //ifstream cin("guess.in");
    //ofstream cout("guess.out");
    cin >> N;
    for (int i = 1; i<=N; i++){
        string animal; cin >> animal;
        names[i] = animal;
        int num; cin >> num;
        for (int j = 1; j<=num; j++){
            string c; cin >> c;
            cnt[c]++;
            animals[i].pb(c);
        }

    }
    for (auto u : cnt){
        f.pb(mp(u.first, u.second));
    }
    sort(f.begin(), f.end(), rev);
    //simulate each animal being the winner
    for (int i = 1; i<=N; i++){
        string winner = names[i];
        int ans = 0;
        //memset(prop, false, sizeof prop);
        vector<string> feasible;
        // for (auto characteristic : animals[i]){
        //     vector<string> t, fin;
        //     for (int j = 1; j<=N; j++){
        //         for (auto u : animals[j]){
        //             if (u==characteristic){
        //                 t.pb(names[j]);
        //             }
        //         }
        //     }
        //     for (auto u : t){
        //         cout << u << " ";
        //     }
        //     cout << endl;
        //     // for (auto u : feasible){
        //     //     bool found = false;
        //     //     for (auto x : t){
        //     //         if (x==u){
        //     //             found = true;
        //     //             break;
        //     //         }
        //     //     }
        //     //     if (found)fin.pb(u);
        //     // }
        // }
        for (auto u : f){
            ans++;
            string charac = u.first;
            vector<string> t, fin;
            bool found = false;
            for (auto x : animals[i]){
                if (x==charac){
                    found = true;
                    break;
                }
            }
            if (found){
                for (int j = 1; j<=N; j++){
                    for (auto x : animals[j]){
                        if (x==charac){
                            t.pb(names[j]);
                        }
                    }
                }
                for (auto u : feasible){
                    bool a = false;
                    for (auto x : t){
                        if (x==u){
                            a = true;
                            break;
                        }
                    }
                    fin.pb(u);
                }
                feasible.clear();
                for (auto u : fin){
                    feasible.pb(u);
                }
                if ((int)feasible.size()==1){
                    break;
                }
            }
            

        }
        cout << ans << endl;
        //MAX = max(MAX, ans);

    }
    //cout << MAX << endl;
    return 0;
}