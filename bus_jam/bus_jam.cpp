#include <iostream>
#include<cmath>
using namespace std;
const int MAXN = 1001;
int N, H, M, buses[MAXN], diff[MAXN];

int main(){
  cin >> N >> M >> H;
  for (int i = N; i>=1; i--){
    cin >> buses[i];
  }
  for (int i = 1; i<N; i++){
    diff[i] = buses[i]-buses[i+1];
  }
  int count = 0;
  for (int i = 1; i<N; i++){
    if (diff[i]>H){
      int add = diff[i]-H;
      int breaks = ceil((double)add/(double)M);
      count+=breaks;
      diff[i+1]+=breaks*M;
    }
  }
  cout << count;
  return 0;
}