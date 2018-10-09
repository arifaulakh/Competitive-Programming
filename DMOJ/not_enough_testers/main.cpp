#include<bits/stdc++.h>
using namespace std;
const int MAXN = 1e5+1;
int T, K, A, B, factors[MAXN];
vector<int> pos[MAXN];
void init(){
	for (int i = 1; i<=(MAXN-1); i++){
		for (int j = i; j<=(MAXN-1); j+=i){
			factors[j]++;
		}
	}
	for (int i = 1; i<=(MAXN-1); i++){
		pos[factors[i]].push_back(i);
	}
}
int main(){
	freopen("data.txt","r",stdin);
	cin >> T;
	init();
	for (int i = 1; i<=T; i++){
		cin >> K >> A >> B;
		auto l = lower_bound(pos[K].begin(), pos[K].end(), A);
		auto u = upper_bound(pos[K].begin(), pos[K].end(), B);
		cout << u - l << endl;
	}
	return 0;
}