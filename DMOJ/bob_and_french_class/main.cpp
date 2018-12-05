#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e5 + 5;
int N, a[MAXN], b[MAXN], dp[MAXN][3];
int main(){
    freopen("data.txt","r",stdin);
    cin >> N;
    for (int i = 1; i <= N; i++){
        cin >> a[i];
    }
    for (int i = 1; i <= N; i++){
        cin >> b[i];
    }
    for (int i = 1; i <= N; i++){
        for (int j = 0; j <= 2; j++){
            if (j == 0){
                dp[i][j] = b[i] + max(dp[i - 1][0], max(dp[i - 1][1], dp[i - 1][2]));
            }
            else
                dp[i][j] = a[i] + dp[i - 1][j - 1];
        }
    }
    cout << max(dp[N][0], max(dp[N][1], dp[N][2])) << endl;
    return 0;
}