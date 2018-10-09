#include<bits/stdc++.h>
using namespace std;
const int MAXN = 101;
int N, K, p[MAXN], s[MAXN];

int main(){
	freopen("data.txt","r",stdin);
	cin >> N >> K;
	for (int i = 1; i<=N; i++){
		cin >> p[i];
		s[i] = p[i];
	}
	sort(s, s+N+1);
	for (int j = 1; j<=N; j++){
		for (int i = 1; i<=(N-K); i++){
			if (p[i]!=s[i]){
				int a = p[i+K];
				int b = p[i];
				p[i] = a;
				p[i+K] = b;
			}
		}
	}
	for (int i = 1; i<=N; i++){
		if (p[i]!=s[i]){
			cout << "NO" << endl;
			return 0;
		}
	}
	cout << "YES" << endl;
	return 0;
}