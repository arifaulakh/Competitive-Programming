#include<iostream>
#include<cmath>
using namespace std;
typedef long long ll;
const ll MAXN = 1e9+1;
ll n, m, a;
int main(){
  cin >> n >> m >> a;
  ll final = ceil((double)n/(double)a)*ceil((double)m/(double)a);
  cout << final;
  return 0;
}
