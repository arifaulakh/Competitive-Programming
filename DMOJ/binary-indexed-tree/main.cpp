#include <iostream>
using namespace std;
typedef long long ll;
const ll MAXN = 100006;
ll N, M, x, l, r, v, num[MAXN], bitfreq[MAXN], bitsum[MAXN];

void add(ll k, ll x, ll tree[]){
	while(k<MAXN){
		tree[k]+=x;
		k+= k&-k;
	}
}
ll sum(ll k, ll tree[]){
	ll ret = 0;
	while(k>=1){
		ret+=tree[k];
		k-=k&-k;
	}
	return ret;
}

int main() {
	freopen("data.txt", "r", stdin);
	cin.sync_with_stdio(0); cin.tie(0);
	cin >> N >> M;
	for (ll i = 1; i<=N; i++){
		cin >> num[i];
		add(num[i], 1, bitfreq);
		add(i, num[i], bitsum);
	}

	for (ll i = 1; i<=M; i++){
		char a; cin >> a;
		if (a=='C'){
			cin >> x >> v;
			add(x,v-num[x], bitsum);
			add(v,1, bitfreq);
			add(num[x], -1, bitfreq);
			num[x]=v;
		}
		if (a=='S'){
			cin >> l >> r;
			cout << sum(r, bitsum)-sum(l-1, bitsum) << "\n";
		}
		if (a=='Q'){
			cin >> v;
			cout << sum(v, bitfreq) << "\n";
		}
	}
    return 0;
}