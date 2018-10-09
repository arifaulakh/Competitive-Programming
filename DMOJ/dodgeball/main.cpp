#include<iostream>
#include<string>
using namespace std;
const int MAXN = 1e5+1, M = 1e9+7;
int N, consec[MAXN], cnt = 0;
char names[MAXN];
int main(){
	//freopen("data.txt", "r", stdin);
	cin >> N;
	for (int i = 1; i<=N; i++){
		string name; cin >> name;
		names[i] = name[0];
	}
	cnt = N;
	for (int i = 2; i<=N; i++){
		if (names[i]==names[i-1]){
			consec[i]++;
			consec[i]+=consec[i-1];
		}
	}
	for (int i = 1; i<=N; i++){
		cnt+=consec[i];
	}
	cout << (cnt+M)%M << endl;
	return 0;
}