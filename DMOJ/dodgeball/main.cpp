#include<iostream>
#include<string>
using namespace std;
const int MAXN = 1e5+1, M = 1e9+7;
int N;
char names[MAXN];
int main(){
	freopen("data.txt", "r", stdin);
	cin >> N;
	for (int i = 1; i<=N; i++){
		string a; cin >> a;
		names[i] = a[0];
	}
	int count = N;
	for (int i = N; i>1; i++){
		if (names[i]==names[i-1]||(names[i]==names[i+1]&&names[i]!=names[i-1])){
			count++;
		}
	}
	cout << count;
	return 0;
}