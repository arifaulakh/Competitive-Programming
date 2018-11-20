#include<bits/stdc++.h>
using namespace std;
const int MAXN = 101;
int N,dp[MAXN][MAXN];

int main(){
	freopen("data.txt","r",stdin);
	cin >> N;
	for (int i = 1; i<=N; ++i){
		for (int j = 1; j<=i; ++j){
			cin >> dp[j][i];
		}
	}
	for (int i = N-1; i>=1; --i){
		for (int j = 1; j<=i; ++j){
			dp[j][i]+=max(dp[j+1][i+1],dp[j][i+1]);
		}
	}
	cout << dp[1][1] << endl;
	return 0;
}
