#include<bits/stdc++.h>
using namespace std;
const int MAXN = 1001;
int N, M, C[MAXN][MAXN];
string X[MAXN], Y[MAXN];

string LCS(int i, int j){
    if (i==0||j==0)return "";
    if (X[i]==Y[j])return LCS(i-1,j-1)+X[i];
    if (C[i][j-1]>C[i-1][j])return LCS(i,j-1);
    return LCS(i-1,j);
}
int LCSlength(int n, int m){
	for (int i = 0; i<=N; i++){
		C[i][0] = 0;
	}
	for (int i = 0; i<=M; i++){
		C[0][i] = 0;
	}
	for (int i = 1; i<=N; i++){
		for (int j = 1; j<=M; j++){
			if (X[i]==Y[j]){
				C[i][j] = C[i-1][j-1]+1;
			}
			else{
				C[i][j] = max(C[i][j-1], C[i-1][j]);
			}
		}
	}
	return C[n][m];
}
