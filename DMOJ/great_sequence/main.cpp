#include<bits/stdc++.h>
using namespace std;
const int MAXN = 1e5+1;
int N, K, Q, ps[MAXN], L[MAXN];

int main(){
	freopen("data.txt", "r", stdin);
	cin >> N >> K >> Q;
	for (int i = 1; i<=N; i++){
		int n; cin >> n;
		ps[i] = ps[i-1]+n;
		L[n] = i;
	}
	for (int i = 1; i<=Q; i++){
		int a, b, x, y;cin >> a >> b >> x >> y;
		x = L[x], y = L[y];
		if ((ps[x]-ps[y-1])>K){
			cout << "Yes" << endl;
		}
		else{
			cout << "No"<< endl;
		}
	}
	return 0;
}