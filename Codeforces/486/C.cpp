#include<bits/stdc++.h>
using namespace std;
const int MAXN = 1e5+1;
int K, N, sums[MAXN];
int main(){
	freopen("data.txt","r",stdin);
	cin >> K;
	for (int i = 1; i<=K; i++){
		cin >> N;
		int arr[N+1], cnt = 0;
		for (int j = 1; j<=N; j++){
			cin >> arr[j];
			cnt+=arr[j];
		}
		sums[i] = cnt;
	}
	for (int i = 1; i<=K; i++){
		cout << sums[i] << " ";
	}
	return 0;
}