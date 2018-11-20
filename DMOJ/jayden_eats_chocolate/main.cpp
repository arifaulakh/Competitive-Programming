#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e5 + 5;
int N, dp[MAXN];
vector<int> val;
int main(){
    freopen("data.txt","r",stdin);
    cin >> N;
    for (int i = 1; i <= 3; i++){
        int a;
        cin >> a;
        val.push_back(a);
    }
    dp[0] = 0;
    for (int i = 1; i <= N; i++){
        dp[i] = -1;
        for (auto u : val){
            if (i >= u && dp[i - u] != -1){
                dp[i] = max(dp[i], dp[i - u] + 1);
            }
        }
    }
    cout << dp[N] << endl;
    return 0;
}