#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MAXN = 1e5+1;
int N, X, cnt = 0;
ll calls[MAXN];
int main(){
	freopen("data.txt","r",stdin);
	cin >> N >> X;
	for (int i = 1; i<=N; i++){
		cin >> calls[i];
	}
	for (int i = 1; i<=N; i++){
		if (X==0) break;
		cnt+=calls[i];
		calls[i]--;
		X--;
		if (X==0) break;
		for (int j = 1; j<=X; j++){
			if (calls[i]>calls[i+1]){
				cnt+=calls[i];
				calls[i]--;
				X--;
			}
			if (X==0) break;
		}
		cout << cnt << endl;
		
	}
	cout << cnt << endl;
	return 0;
}