#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll N, K;
int main(){
  cin >> N >> K;
  ll mod = N%K;
  ll ans = abs(K-mod);
  cout << min(mod, ans) << endl;
  return 0;
}