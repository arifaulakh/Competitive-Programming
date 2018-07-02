#include<bits/stdc++.h>
using namespace std;
const int MAXN = 1e5+1;
int N, a[MAXN], idx = 0, cnt = 0;
int main(){
	freopen("data.txt","r",stdin);
	cin >> N;
	for (int i = 1; i<=N; i++){
		cin >> a[i];
	}
	int p = a[1];
	for (int i = 1; i<=N; i++){
		if (p>a[i])a[i] = 0;
		else a[i] = a[i]-p;
	}
	for (int i = 1; i<=N; i++){
		if (a[i]>0)idx = i;
	}
	cout << idx+1 << endl;
	return 0;
}