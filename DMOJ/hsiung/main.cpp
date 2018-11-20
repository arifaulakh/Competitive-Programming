#include<bits/stdc++.h>
using namespace std;
const int MAXN = 1001;
int A, B, C, dp[MAXN];
vector<int> val;
int main(){
    freopen("data.txt","r",stdin);
    cin >> A >> B >> C;
    val.push_back(A), val.push_back(B);
    dp[0] = 0;
    for (int i = 1; i<=C; i++){
        for (auto u : val){
            if (i>=u&&(dp[i-u]+u)<=i){
                dp[i] = max(dp[i], dp[i-u]+u);
            }
        }
    }
    cout << dp[C] << endl;
    return 0;
}