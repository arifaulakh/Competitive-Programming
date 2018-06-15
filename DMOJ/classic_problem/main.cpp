#include<bits/stdc++.h>
using namespace std;
int N, K, cnt = 0;
void P(int arr[], int len, int comp){
	int s_size = pow(2,len);
	for (int c = 0; c<s_size; c++){
		for (int j = 0; j<len; j++){
			if (c&(1<<j)){
				cout << arr[j] << " ";
			}
		}
		cout << endl;
	}
}
int main(){
	freopen("data.txt","r", stdin);
	cin >> N >> K;
	int num[N];
	for (int i = 0; i<N; i++){
		cin >> num[i];
	}
	P(num,N, K);
	return 0;
}