#include <bits/stdc++.h>
using namespace std;

int main(){
  int N; scanf("%d", &N);
  int total = N;
  for (int i = 1; i <=3; i++){
    total *= (N-i);
  }
  total = total/24;
  printf("%d\n", total);
  return 0;
}