#include<iostream>
#include<string>
using namespace std;

int R, C, K;

int main(){
	cin >> R >> C >> K;
	int dp[R][C];
	for (int i = 0; i< R;i++){
	  for (int j = 0; j< C; j++){
	    dp[i][j] = 0;
	  }
	}
	for (int i = 0; i<K;i++){
		int a, b; cin >> a >>b;
		dp[a-1][b-1] = -1;
	}
	for (int i = 0; i<R; i++){
	  if (dp[i][0] == -1) break;
	  dp[i][0] = 1;
	}
	for (int i = 0; i< C; i++){
	  if (dp[0][i] == -1) break;
	  dp[0][i] = 1;
	}
	for (int i = 1; i< R; i++){
	  for (int j = 1; j< C; j++){
	    if (dp[i][j]!= -1){
	      if (dp[i-1][j]!=-1){dp[i][j]=dp[i-1][j];}
        if (dp[i][j-1]!=-1){dp[i][j]+=dp[i][j-1];}
	    }
	  }
	}
	cout << dp[R-1][C-1];
	return 0;
}