#include<iostream>
using namespace std;
const int MAXN = 101;
int N, K, contestants[MAXN], cnt = 0;

int main(){
	freopen("data.txt", "r", stdin);
	cin >> N >> K;
	for (int i = 1; i<=N; i++){
		cin >> contestants[i];
	}
	K = contestants[K];
	for (int i = 1; i<=N; i++){
		if (contestants[i]>=K&&contestants[i]>0) cnt++;
	}
	cout << cnt << endl;
	return 0;
}