#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll N, cnt = 0;

int main(){
	freopen("data.txt","r", stdin);
	cin >> N;
    int row = round(sqrt(2*N));
	ll TR = ((row)*(row+1))/2;
	ll TL = TR-(row-1);
	ll sum = (double)(TR+TL)*((double)row/(double)2);
	cout << sum;
	return 0;
}