#include<iostream>
#include<algorithm>
using namespace std;
typedef long long ll;
const ll MAXN = 1e5+1;
ll n, s, groups[MAXN];
	
int main(){
	freopen("data.txt", "r", stdin);
	cin >> n;
	int count = 0;
	for (int i = 1; i<=n; i++){
		cin >> groups[i];
	}
	sort(groups, groups+n+1);
	for (int i = 1; i<=n; i++){
		cout << groups[i] << endl;
	}
	return 0;
}