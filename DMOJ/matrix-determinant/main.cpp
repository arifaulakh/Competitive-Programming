#include<iostream>
#include<cmath>
using namespace std;
typedef long long ll;
const ll MOD = 1e9+7;
const ll MAXN = 505;
ll N, matrix[MAXN][MAXN];
ll determ(ll N) {
  int det=0, p, h, k, i, j, temp[MAXN][MAXN];
  if(N==1) {
    return matrix[0][0];
  } else if(N==2) {
    det=(matrix[0][0]*matrix[1][1]-matrix[0][1]*matrix[1][0]);
    return det;
  } else {
    for(p=0;p<N;p++) {
      h = 0;
      k = 0;
      for(i=1;i<N;i++) {
        for( j=0;j<N;j++) {
          if(j==p) {
            continue;
          }
          temp[h][k] = matrix[i][j];
          k++;
          if(k==N-1) {
            h++;
            k = 0;
          }
        }
      }
      det=det+matrix[0][p]*pow(-1,p)*determ(N-1);
    }
    return det;
  }
}
int main(){
	freopen("data.txt", "r", stdin);
	cin >> N;
	for (ll i = 0; i<N; i++){
		for (ll j = 0; j<N; j++){
			cin >> matrix[i][j];
		}
	}
	cout << determ(N);
	return 0;
}