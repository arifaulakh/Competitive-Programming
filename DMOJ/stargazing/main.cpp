#include <iostream>
const int MAXN = 101;
using namespace std;
int stars[MAXN][3];
int N;
int main(){
  freopen("data.txt", "r", stdin);
  cin >> N;
  int count = N;
  int repeat = 0;
  stars[1][1] = 0;
  stars[1][2] = 0;
  for (int i = 2; i<=N; i++){
    int p, x, y; cin >> p >> x >> y;
    stars[i][1] = stars[p][1]+x;
    stars[i][2] = stars[p][2]+y;
  }
  for (int i = 2; i<N; i++){
    for (int j = i+1; j<=N; j++){
      if (stars[i][1]==stars[j][1]&&stars[i][2]==stars[j][2])count--;
    }
  }
  cout << count;
  return 0;
}