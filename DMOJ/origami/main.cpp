#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll N, K, cnt = 0, piece = 1;

int main(){
	freopen("data.txt","r",stdin);
	cin >> N >> K;
	while (piece<N&&piece<K){
		piece*=2;
		cnt++;
	}
	cnt+=(N-piece+K-1)/K;
	cout << cnt << endl;
}