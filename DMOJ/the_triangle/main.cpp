#include<bits/stdc++.h>
using namespace std;
const int MAXN = 100;
int N, dp[MAXN][MAXN];

int main(){
	freopen("data.txt","r",stdin);
	cin>> N;
	for (int i = 0; i<N; i++){
		for (int j = 0;j<=i;j++){
			cin >> dp[i][j];
		}
	}
	int m = N-1;
	for (int i = m-1; i>=0; i++){
		for (int j = 0; j<=i; j++){
			if (dp[i+1][j]>dp[i+1][j+1]){
				dp[i][j]+=dp[i+1][j];
			}
			else{
				dp[i][j]+=dp[i+1][j+1];
			}
		}
	}
	cout << dp[0][0];

	return 0;
}
