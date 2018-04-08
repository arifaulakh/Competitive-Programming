#include<iostream>
#include<cmath>
using namespace std;
typedef long long ll;
const ll MAXN = 1000006;
ll A[MAXN], P[MAXN];
int N, M, Q, c, x, y;
int main(void) {
  freopen("data.txt", "r", stdin);
  cin.tie(0); cin.sync_with_stdio(0); cout.tie(0);
  cin >> N >> M >> Q;
  for (ll i = 1; i<=N; i++){
    cin >> c;
    A[c] = i;
    P[i]=P[i-1]+c;
  }
  while(Q--){
    cin >> x >> y;
    y = A[y];
    x = A[x];
    if (x>y){
      if (floor((P[x]-P[y-1])/2)>=M) cout << "Enough" << endl;
      else cout << "Not enough" << endl;
    }
    else{
      if (floor((P[y]-P[x-1])/2)>=M) cout << "Enough" << endl;
      else cout << "Not enough" << endl;
    }
  }
  return 0;
}