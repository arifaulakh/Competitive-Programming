#include<bits/stdc++.h>
using namespace std;
const int MAXN = 1e5+1;
int N, K, Q, num[MAXN];
vector<int> idx[2005];

bool contains(int x, int y, int num){
	auto low = lower_bound(idx[num+1000].begin(), idx[num+1000].end(), x);
	if (low == idx[num+1000].end() || *low > y) return false;
	return true;
}
int main(){
	freopen("data.txt", "r", stdin);
	cin >> N >> K >> Q;
	for (int i = 1; i<=N; i++){
		cin >> num[i];
		idx[1000+num[i]].push_back(i);
		num[i]+=num[i-1];
	}
	for (int q = 1; q<=Q; q++){
		int a, b, x, y; cin >> a >> b >> x >> y;
		if (num[y]-num[x-1]>K){
			if ((contains(x, y, a))&&contains(x, y, b)) cout << "Yes" << endl;
			else cout << "No" << endl;

		}
		else{
			cout << "No" << endl;
		}
	}
	return 0;
}