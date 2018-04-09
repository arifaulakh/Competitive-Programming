#include<iostream>
#include<cmath>
using namespace std;
typedef long long ll;
const ll MAXN = 100005;
ll N, M, x, y, num[MAXN];
ll Euclidean(ll a, ll b){
  ll mod;
  while(true){
    mod = b%a;
    if (mod==0){
      mod = a;
      break;
    }
    b = a;
    a = mod;
  }
  return mod;
}

int main(){
	freopen("data.txt", "r", stdin);
	cin.sync_with_stdio(0); cin.tie(0);
	cin >> N >> M;
	for (int i = 1; i<=N; i++){
		cin >> num[i];
	}
	ll gcd;
	for (int i = 1; i<=M; i++){
		char c;
		cin >> c >> x >> y;
		if (c=='C'){
			num[x] = y;
		}
		if (c=='M'){
			int min = num[y];
			for (int j = x; j<=y; j++){
				if (num[j]<min) min = num[i];
			}
			cout << min << endl;
		}
		if (c=='G'){
			gcd = Euclidean(num[x], num[x+1]);
			for (int j = x+1; j<y; j++){
				gcd = Euclidean(num[j], num[j+1]);
			}
			cout << gcd << endl;
		}
		if (c=='Q'){
			ll count = 0;
			for (int j = x; j<=y; i++){
				if (num[j]==gcd)count++;
			}
			cout << count << endl;
		}
	}
	return 0;
}