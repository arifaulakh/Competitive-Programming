#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll N, B, A;
int main(){
	freopen("data.txt","r",stdin);
	cin >> N >> B >> A;
	if (B>0){
		ll MAX_X = ((double)(-1)*(N*B-A)/(double)(-2*B))+0.5;
		ll final = ((-1*B)*(MAX_X*MAX_X))+(N*B-A)*MAX_X+(A*N);
		cout << final;
	}
	else{
		cout << A*N;
	}
	
	return 0;
}