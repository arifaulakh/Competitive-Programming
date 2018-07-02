#include<bits/stdc++.h>
using namespace std;

int N, M, P;
int main(){
	freopen("data.txt","r",stdin);
	cin >> N >> M >> P;
	if (N!=M) cout << "STAY";
	else cout << "SWITCH";
	return 0;
}