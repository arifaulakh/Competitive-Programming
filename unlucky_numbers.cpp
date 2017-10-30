#include <bits/stdc++.h>

using namespace std;

int ps[1000006];

int main() {
  int K; scanf("%d", &K);
  
  for (int i = 1, u; i<= K; i++){
    scanf("%d", &u);
    ps[u] = 1;
  }
  
  for (int i = 1; i < 1000006; ++i) ps[i] += ps[i-1];
  
  int N; scanf("%d", &N);
  
 for (int i = 1; i <= N; ++i) {
   int f; scanf("%d", &f);
   printf("%d\n", f-ps[f]);
 }
  return 0;
}