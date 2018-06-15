#include<iostream>
using namespace std;
const int MAXN = 200001;
int n, p[MAXN], cnt = 0;

int main(){
	freopen("data.txt", "r", stdin);
	cin >> n;
	for (int i = 1; i<=n; i++){
		int a; cin >> a;
		p[i] = p[i-1]+a;
		cnt+=a;
	}
	for (int i = 1; i<=n; i++){
		if (p[i]*2>=cnt){
			cout << i << endl;
			break;
		}
	}
	return 0;
}