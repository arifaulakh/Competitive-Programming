#include<bits/stdc++.h>
using namespace std;
const int MAXN = 101;
int T, C, num[MAXN], TIME = 0, cnt = 0;
int main(){
	freopen("data.txt","r",stdin);
	cin >> T >> C;
	for (int i = 1; i<=C; ++i){
		cin >> num[i];
	}
	sort(num, num+C+1);
	for (int i = 1; i<=C; ++i){
		if (TIME+num[i]<=T){
			cnt++;
			TIME+=num[i];
		}
	}
	cout << cnt << endl;
	return 0;
}