#include<bits/stdc++.h>
using namespace std;
const int MAXN = 11;
int N, cnt = 0;
char arr[MAXN][MAXN];

void toggle(){
	cnt++;
	int L = -1, R = -1, T = -1, B = -1;
	for (int i = 1; i<=N; i++){
		for (int j = 1; j<=N; j++){
			if (arr[i][j] =='1'){
				L = j;
				break;
			}
		}
	}
	for (int i = 1; i<=N; i++){
		for (int j = 1; j<=N; j++){
			if (arr[i][j]=='1'){
				R = j;
			}
		}
	}
	for (int i = 1; i<=N; i++){
		for (int j = 1;j<=N; j++){
			if (arr[i][j]=='1'){
				T = i;
				break;
			}
		}
	}
	for (int i = 1; i<=N; i++){
		for (int j = 1;j<=N; j++){
			if (arr[i][j]=='1'){
				B = i;
			}
		}
	}
	for (int i = 1; i<=B; i++){
		for (int j = 1; j<=R; j++){
			if (arr[i][j]=='1')arr[i][j]='0';
			else if (arr[i][j]=='0')arr[i][j] = '1';
		}
	}
}
int main(){
	//ifstream cin("cowtip.in");
	//ofstream cout("cowtip.out");
	freopen("data.txt","r",stdin);
	cin >> N;
	bool allzero = false;
	for (int i = 1; i<=N; i++){
		for (int j = 1; j<=N; j++){
			cin >> arr[i][j];
		}
	}
	int num = 0;
	for (int i = 1;i<=N; i++){
		for (int j = 1; j<=N; j++){
			if (arr[i][j]=='1')num++;
		}
	}
	if (num==0)cout << 0 << endl;
	else{
		while(num!=0){
			toggle();
			num = 0;
			for (int i = 1;i<=N; i++){
				for (int j = 1; j<=N; j++){
					if (arr[i][j]=='1')num++;
				}
			}
		}
		cout << cnt << endl;
	}
	return 0;
}