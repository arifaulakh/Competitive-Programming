#include<bits/stdc++.h>
using namespace std;
const int MAXN =  5e4, K = 17;
int N, Q, arr[MAXN], LOG[MAXN+1], st[MAXN][K], st2[MAXN][K];

void compute_log(){
	LOG[1] = 0;
	for (int i = 2; i<=MAXN; i++){
		LOG[i] = LOG[i/2]+1;
	}
}
void precompute_min(){
	for (int i = 0; i<N; i++){
		st[i][0] = arr[i];
	}
	for (int j = 1; j<=K; j++){
		for (int i = 0; i+(1<<j)<=N; i++){
			st[i][j] = min(st[i][j-1], st[i + (1 << (j - 1))][j - 1]);
		}
	}
}
void precompute_max(){
	for (int i = 0; i<N; i++){
		st2[i][0] = arr[i];
	}
	for (int j = 1; j<=K; j++){
		for (int i = 0; i+(1<<j)<=N; i++){
			st2[i][j] = max(st2[i][j-1], st2[i + (1 << (j - 1))][j - 1]);
		}
	}
}
int main(){
	freopen("data.txt","r",stdin);
	scanf("%d%d", &N, &Q);
	for (int i = 0; i<N; i++){
		scanf("%d", &arr[i]);
	}
	compute_log();
	precompute_min();
	precompute_max();
	for (int i = 1; i<=Q; i++){
		int L, R; scanf("%d%d", &L, &R);
		L-=1, R-=1;
		int j = LOG[R-L+1];
		int MIN = min(st[L][j], st[R - (1 << j) + 1][j]);
		int MAX = max(st2[L][j], st2[R - (1 << j) + 1][j]);
		printf("%d\n", MAX-MIN);
	}
	return 0;
}