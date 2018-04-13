#include<iostream>
#include<algorithm>
using namespace std;
const int MAXN = 101;
int n, citizens[MAXN], MAX, cnt = 0 ;

int main(){
	freopen("data.txt", "r",stdin);
	cin >> n;
	for (int i = 1; i<=n; i++){
		cin >> citizens[i];
	}
	if (n==1){
		cout << 0 << endl;
		return 0;
	}
	sort(citizens, citizens+n+1);
	MAX = citizens[n];
	for (int i = 1; i<=n; i++){
		if (citizens[i]<MAX) cnt+=(MAX-citizens[i]);
	}
	cout  << cnt << endl;
	return 0;
}