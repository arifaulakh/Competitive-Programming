#include<bits/stdc++.h>
using namespace std;
const int MAXN = 1e6+6;
int N, Q, t[MAXN], wow[MAXN], dp[MAXN], times[MAXN];

int main(){
    freopen("data.txt","r",stdin);
    cin >> N;
    for (int i = 1; i<=N; i++){
        cin >> t[i] >> wow[i];
        if (times[t[i]]>0){
            times[t[i]] = max(wow[i], times[t[i]]);
        }
        times[t[i]] = wow[i];
    }
    int MAX = -1;
    for (int i = 1; i<=MAXN; i++){
        MAX = max(MAX, times[i]);
        dp[i] = MAX;
    }
    cin >> Q;
    while(Q--){
        int q; cin >> q;
        cout << dp[q] << endl;
    }
    return 0;
}