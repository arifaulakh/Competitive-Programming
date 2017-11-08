#include <bits/stdc++.h>
using namespace std;


int main(){
  int N; scanf("%d", &N);
  int K; scanf("%d", &K);
  int a = N%K;
  int b = K-a;
  int total = min(a, b);
  if (K >= N){
    total = b;
  }
  printf("%d\n", total);
  return 0;
}