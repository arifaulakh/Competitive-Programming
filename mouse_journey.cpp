#include<iostream>
using namespace std;

int R, C, K, dp[R][C];

int main(){
	scanf("%d%d", &R, &C);
	scanf("%d", &K);
	while(K--){
		int a, b; scanf("%d%d", &a, &b);
		dp[a][b] = 1;
	}
}