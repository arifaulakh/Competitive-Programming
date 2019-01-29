#include<bits/stdc++.h>
using namespace std;

int N, W, v[101], w[101], dp[101];

int main(){
	memset(dp, 0, sizeof dp);
	memset(v, 0, sizeof v);
	memset(w, 0, sizeof w);
	cin >> N >> W;
	for (int i = 1; i<= N;i++) cin >> v[i] >> w[i];
	// for (int i = 1; i<=N; i++){
	// 	for (int j = 0; i<=W; j++){
	// 		if (i==0||j==0) dp[i][j] =0;
	// 		else if (w[i]>j) dp[i][j] = dp[i-1][j];
	// 		else dp[i][j] = max(dp[i-1][j], dp[i-1][j-w[i]]+v[i]);
	// 	}
	// } 
	for (int i = 1; i<=N; i++){
		for (int j = W; j>=w[i]; j--){
			dp[j] = max(dp[j], v[i]+dp[j-w[i]]);
		}
	}
}