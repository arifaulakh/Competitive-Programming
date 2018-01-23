#include<iostream>
#include<algorithm>
using namespace std;

int N, M, H;

int main(){
	int B[N];
	scanf("%d%d%d", &N, &M, &H);
	for (int i = 0; i<N; i++) scanf("%d", &B[i]);
	sort(B, B+N, greater<int>());
	int count = 0;
	for (int i = 0; i < N; i++){
		if (B[i]-B[i+1] > H){
			count+=
		}
	}
	return 0;
}