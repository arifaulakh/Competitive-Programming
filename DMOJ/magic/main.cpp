#include<bits/stdc++.h>
using namespace std;
int K, D, Sa, Sb, Pa, Pb, turn = 0;
bool alice = false;

bool prime(int n){
	if (n<2) return false;
	for (int i = 2; i*i <=n; i++){
		if (n%i==0)return false;
	}
	return true;
}
int main(){
	freopen("data.txt","r",stdin);
	cin >> K >> D;
	cin >> Sa >> Sb;
	cin >> Pa >> Pb;
	if (abs(Pa-Pb)<D||abs(Pa-Pb+K)<D){
		if (Pa>=Pb)Pb = (Pa-D+K)%K;
		else Pb = (Pb+D)%K;
	}
	while(true){
		if (turn>10000000) break;
		turn++;
		Pa= (Pa+Sa)%K, Pb=(Pb+Sb)%K;
		if (abs(Pa-Pb)<D||abs(Pa-Pb+K)<D){
			if (Pa>=Pb)Pb = (Pa-D+K)%K;
			else Pb = (Pa+D)%K;
		}
		if (prime(min(Pa, K-Pa)+min(Pb, K-Pb))){
			alice = true;
			cout << "Alice" << endl;
			return 0;
		}
	}
	cout << "Bob" << endl;
	return 0;
}