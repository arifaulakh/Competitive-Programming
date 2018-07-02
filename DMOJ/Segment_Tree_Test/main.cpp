#include<iostream>
#include<cmath>
using namespace std;
typedef long long ll;
const ll MAXN = 1e5+1;
ll N, M, x, y, tree[MAXN];

void add(int k, int x){
	k+=N;
	tree[k] +=x;
	for (k/=2; k>=1; k/=2){
		tree[k] = tree[2*k]+tree[2*k+1];
	}
}

int main(){
	freopen("data.txt", "r", stdin);
	cin.sync_with_stdio(0); cin.tie(0);
	cin >> N >> M;
	for (int i = 1; i<=N; i++){
		cin >> tree[i];
	}
	for (int i = 1; )
	
	return 0;
}