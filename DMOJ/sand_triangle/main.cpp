#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e9+1;
int N,cnt = 0;

int main(){
	freopen("data.txt","r", stdin);
	cin >> N;
	int t[N+1];
	for (int i = 1; i<=N; i++){
	    t[i] = (i*(i+1))/2;
	}
	for (int i = 1; i<=N; i++){
		if (N<=t[i]){
			for (int j = t[i-1]+1; j<=t[i]; j++){
				cnt+=j;
			}
			break;
		}
	}
	cout << cnt;
	return 0;
}