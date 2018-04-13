#include<iostream>
#include<cmath>
using namespace std;
typedef long long ll;
ll n, k, w, total;
int main(){
	freopen("data.txt", "r", stdin);
	cin >> k >> n >> w;
	if (w%2==0){
		total = (w+1)*(w/2);
	}
	else{
		total = (w+1)*(floor(w/2))+((w+1)/2);
	}
	k*=total;
	//cout << (w+1)*(w/2);
	if (k>n) cout << (k-n) << endl;
	if (k<=n)cout << 0 <<endl;
	return 0;
}