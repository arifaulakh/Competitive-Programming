#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MAXN = 1e6+6;
ll N, s[2*MAXN], arr[MAXN];
void sieve(ll n){
    s[1] = -1;
    for (int x = 2; x<=n; x++){
        if (s[x])continue;
        for (int u = 2*x; u<=n; u+=x){
            s[u] = x;
        }
    }
}

int main(){
    //freopen("data.txt","r",stdin);
    cin >> N;
    sieve(2000000);
    while(N--){
        ll a; cin >> a;
        for (int i = a; i>=2; i--){
            if (s[i]==0){
                if (s[a*2-i]==0){
                    cout << i << " " << a*2-i << endl;
                    break;
                }
            }
        }
    }
    return 0;
}