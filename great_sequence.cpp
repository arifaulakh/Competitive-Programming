#include<iostream>
#include<algorithm>
using namespace std;

const int MAXN = 1e5;
int N, K, Q, a, b, x, y, prefix[MAXN];

int main(){
	scanf("%d%d%d", &N, &K, &Q);
	for (int i = 0; i<N; ++i) scanf("%d", &prefix[i]);
	for (int i = 1; i<N; ++i) prefix[i]+= prefix[i-1];
	
	return 0;
}