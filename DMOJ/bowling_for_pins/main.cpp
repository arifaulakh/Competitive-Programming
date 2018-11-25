#include<bits/stdc++.h>
using namespace std;
const int MAXN = 30006;
int t, n, k, w, arr[MAXN], ps[MAXN], dp[MAXN][501];
int main(){
    freopen("data.txt","r",stdin);
    cin >> t;
    while(t--){
        cin >> n >> k >> w;
        for (int i = 1; i<=n; i++){
            cin >> arr[i];
            ps[i] = ps[i - 1] +arr[i];
        }
        for (int i = 1; i<=n; i++){
            dp[i][0] = 0;
        }
        for (int i = 1; i<=w; i++){
            for (int j = 1; j<=k; j++){
                dp[i][j] = ps[i];
            }
        }
        if (w==n){
            cout << dp[n][k] << endl;
            return 0;
        }
        for (int i = w+1; i<=n; i++){
            for (int j = 1; j<=k; j++){
                if (ps[i]-ps[i-w]+dp[i-w][j-1]>dp[i-1][j]){
                    dp[i][j] = (ps[i]-ps[i-w])+dp[i-w][j-1];
                }  
                else{
                    dp[i][j] = dp[i-1][j];
                }
            }
        }
        cout << dp[n][k] << endl;
    }
    return 0;
}