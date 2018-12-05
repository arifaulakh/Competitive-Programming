#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MAXN = 1e6+6;
ll N, Q, arr[MAXN];
map<ll, ll>cnt, idx;
int main(){
    freopen("data.txt","r",stdin);
    cin >> N >> Q;
    for (int i = 1; i <= N; i++){
        cin >>arr[i];
        idx[arr[i]] = i;
        cnt[arr[i]] = 0;
    }
    while(Q--){
        ll q; cin >> q;
        if (q==1){
            ll i, j, k; cin >> i >> j >> k;
            for (int x = 1; x<=N; x++){
                if (arr[x]>=i&&arr[x]<=j){
                    cnt[arr[x]]+= k;
                }
            }
        }
        else if (q==2){
            ll v; cin >> v;
            cout << cnt[arr[v]] << endl;
        }
    }
    return 0;
}