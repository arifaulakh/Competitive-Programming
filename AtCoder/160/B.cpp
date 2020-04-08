#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll X, total = 0;
int main(){
  cin >> X;
  if (X<5) cout << 0 << endl;
  else{
    ll large = X/500;
    X -= (large * 500);
    total += large * 1000;
    ll small = X/5;
    X -= (small*5);
    total += small * 5;
    cout << total << endl;
  }
  return 0;
}