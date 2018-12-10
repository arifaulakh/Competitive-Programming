#include<bits/stdc++.h>;
using namespace std;
#define MAXN 1001
string a, b;
int dp[MAXN][MAXN];
int main(){
    cin >> a >> b;
    for (int i = 1; i<=(int)a.size(); i++){
        dp[i][0] = i;
    }
    for (int j = 1; j<=(int)b.size(); j++){
        dp[0][j] = j;
    }
    for (int i = 1; i<=(int)a.size(); i++){
        for (int j = 1; j<=(int)b.size(); j++){
            if (a[i-1]==b[j-1]){
                dp[i][j] = dp[i-1][j-1];
            }
            else{
                dp[i][j] = min(dp[i-1][j]+1, min(dp[i][j-1]+1, dp[i-1][j-1]+2));
            }
        }
    }
    cout << dp[(int)a.size()][(int)b.size()];
    return 0;
}