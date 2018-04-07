#include <bits/stdc++.h>

using namespace std;

int x[100000];

int main() {
  int sum = 0;
  int N; scanf("%d", &N);
  for (int i = 1; i<= N; i++){
    scanf("%d", &x[i]);
    sum +=x[i];
  }
  int M; scanf("%d", &M);
  while(M--){
    int a, d; scanf("%d%d", &a, &d);
    sum -= min(x[a], min(x[a+1], d));
    
    
  }
  printf("%d\n", sum);
  return 0;
}