#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MAXN = 1e6+6;
ll N, arr[MAXN], length[MAXN];
int main(){
	freopen("data.txt","r",stdin);
	cin >> N;
	for (int i = 1; i<=N; i++){
		cin >> arr[i];
	}
	for (int k = 1; k<=N; k++){
		length[k] = 1;
		for (int i = 1; i<=k; k++){
			if (arr[i]<arr[k])length[k] = max(length[k], length[i]+1);
		}
	}
	for (int i = 1; i<=N; i++){
		cout << length[i] << endl;
	}
	return 0;
}