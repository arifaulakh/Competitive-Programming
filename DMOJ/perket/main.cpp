#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MAXN = 11, MAXC = 1e6;
ll N, S[MAXN], B[MAXN];
int main(){
	freopen("data.txt","r",stdin);
	cin >> N;
	for (int i = 1; i<=N; i++){
		cin >> S[i] >> B[i];
	}
	ll MIN = abs(S[1]-B[1]);
	for (int i = 1; i<=N; i++){
		for (int j = 1; j<=i; j++){
			
		}
	}
	cout << MIN << endl;
	return 0;
}