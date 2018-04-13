#include<iostream>
using namespace std;
const int MAXN = 201;
int n, m, b[MAXN], a[MAXN], alice = 0, carl = 0;

int main(){
	freopen("data.txt", "r", stdin);
	cin >> n;
	for (int i = 1; i<=n; i++){
		cin >> a[i];
	}
	for (int i = 1; i<=n; i++){
		int x; cin >> x;
		alice+=(x*a[i]);
	}
	cin >> m;
	for (int i = 1; i<=m; i++){
		cin >> b[i];
	}
	for (int i = 1; i<=m; i++){
		int x; cin >> x;
		carl +=(x*b[i]);
	}
	cout << alice << " " << carl << endl;
	return 0;
}