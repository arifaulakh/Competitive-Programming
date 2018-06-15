#include<bits/stdc++.h>
using namespace std;

int N, freq[1001], arr[51],idx[1001], c[1001];

int main(){
	freopen("data.txt","r",stdin);
	cin >> N;
	int cnt = 0;
	for (int i = 1; i<=N; i++){
		cin >> arr[i];
		freq[arr[i]]++;
		idx[arr[i]] = i;
	}
	for (int i = 1; i<=1001;i++){
		if (freq[i]>=1){
			cnt++;
		}
	}
	cout << cnt-1 << endl;
	for (int i = 1; i<=1001; i++){
		c[idx[i]]=i;
	}
	for (int i = 1; i<=1001; i++){
		if (c[i]!=0){
			cout << c[i] << " ";
		}
	}
	return 0;
}
