#include<bits/stdc++.h>
using namespace std;
const int MAXN = 101;
int N, K, a[MAXN], idx[MAXN], cnt = 0;
vector<int> m;

int main(){
	freopen("data.txt","r",stdin);
	cin >> N >> K;
	for (int i = 1; i<=N; i++){
		int c; cin >> c;
		if (a[c]==0){
			if ((int)m.size()==K)break;
			m.push_back(i);
		}
		a[c] = 1;
	}
	for (int i = 1; i<=MAXN; i++){
		if (a[i]==1)cnt++;
	}

	if (cnt>=K){
		cout << "YES" << endl;
		for (auto x : m){
			cout << x << " ";
		}
	}

	else{
		cout << "NO" << endl;
	}
	return 0;
}