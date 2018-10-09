#include<bits/stdc++.h>
using namespace std;
int N;
priority_queue<int> a, b;
int main(){
	freopen("data.txt","r",stdin);
	cin >> N;
	for (int i = 1; i<=N; i++){
		int x; cin >> x;
		a.push(x);
	}
	for (int i = 1; i<=N; i++){
		int x; cin >> x;
		b.push(x);
	}
	return 0;
}