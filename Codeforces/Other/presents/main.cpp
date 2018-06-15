#include<iostream>
using namespace std;
const int MAXN = 101;
int n, a[MAXN], b[MAXN];
int main(){
	freopen("data.txt", "r", stdin);
	cin >> n;
	for (int i = 1; i<=n; i++){
		int x; cin >> x;
		a[x] = i;
	}
	for (int i = 1; i<=n; i++){
		cout << a[i] << " ";
	}
	return 0;
}