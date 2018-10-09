#include<bits/stdc++.h>
using namespace std;
int n;

int gcd(int a, int b){
  int mod;
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
	cin >> n;
	freopen("data.txt","r",stdin);
	return 0;
}