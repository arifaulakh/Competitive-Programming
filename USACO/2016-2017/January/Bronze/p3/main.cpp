#include<bits/stdc++.h>
using namespace std;
const int MAXN = 11;
int N;
char arr[MAXN][MAXN];
int main(){
	ifstream fin("cowtip.in");
	ofstream fout("cowtip.out");
	//freopen("data.txt","r",stdin);
	fin >> N;
	for (int i = 1; i<=N; i++){
		for (int j = 1; j<=N; j++){
			fin >> arr[i][j];
		}
	}
	// for (int i = 1; i<=N; i++){
	// 	for (int j = 1; j<=N; j++){
	// 		cout << arr[i][j];
	// 	}
	// 	cout << endl;
	// }
	int cnt = 0;
	for (int i = 1; i<=N; i++){
		for (int j = 1; j<=N; j++){
			if (arr[i][j]=='0')cnt++;
		}
	}
	fout << cnt << endl;
	return 0;
}