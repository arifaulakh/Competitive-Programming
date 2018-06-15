#include<iostream>
using namespace std;
int N, cnt=0;
int main(){
	freopen("data.txt", "r", stdin);
	// int cnt = 0;
	cin >> N;
	for (int i = 1; i<=N; i++){
		string s; cin >> s;
		if (s[0]!='X'){
			if (s[0]=='-') cnt--;
			else if (s[0]=='+')cnt++;
		}
		else if (s[0]=='X'){
			if (s[1]=='-')cnt--;
			else if (s[1]=='+')cnt++;
		}
	}
	cout << cnt;
	return 0;
}