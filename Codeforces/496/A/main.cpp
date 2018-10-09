#include<bits/stdc++.h>
using namespace std;
const int MAXN = 1001;
int N, num[MAXN], idx[MAXN], diff[MAXN], cnt = 0;
int main(){
	freopen("data.txt","r",stdin);
	cin >> N;
	for (int i = 1; i<=N; i++){
		cin >> num[i];
	}
	for (int i = 1; i<=N; i++){
		if (num[i]==1)cnt++;
		idx[cnt] = i;
	}
	cout << cnt << endl;
	for (int i = 0; i<cnt; i++){
		cout << idx[i+1]-idx[i] << " ";
	}
	return 0;
}