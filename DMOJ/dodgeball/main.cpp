#include<iostream>
#include<string>
using namespace std;
const int MAXN = 1e5+1;
int N;
string names[MAXN];
int main(){
	freopen("data.txt", "r", stdin);
	cin >> N;
	for (int i = 1; i<=N; i++){
		cin >> names[i];
	}
	int count = N;
	bool isAdj = false;
	for (int i = 1; i<=N-1; i++){
		string a = names[i];
		string b = names[i+1];
		if (a[0]==b[0]) isAdj = true;
		else isAdj = false;
		if (isAdj)count++;
	}
	cout << count;
	return 0;
}