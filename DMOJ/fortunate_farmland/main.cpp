#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
typedef long long ll;
const ll MAXN = 1e5+1;
ll c, t, m[MAXN], MIN, cnt = 0;

int main(){
	freopen("data.txt", "r", stdin);
	cin >> c >> t;
	for (ll i = 1; i<=c; i++){
		cin >> m[i];
	}
	sort(m+1, m+c+1);
	MIN = m[1];
// 	m[c+1] = 100000000000LL;
	for (ll i = 1; i<=c;){
		// MIN = m[1];
		ll j = i;
		for (; j+1 <= c && m[j+1] == m[j]; ++j, ++cnt);

		// [1, j] 
		
		ll diff = m[j+1]-MIN;
		if (j == c) {
		    MIN += (t/j);
		    break;
		} else {
		    if (diff * j <= t) {
			i = j+1;
			t -= diff*j;
			MIN = m[j+1];
		} else {
			MIN += (t/j);
			break;
		}
		}
		
	}

	printf("%lld", MIN);
	
	return 0;
}