#include <bits/stdc++.h>

using namespace std;

int main() {
 int N;
 scanf("%d", &N);
 int Q;
 scanf("%d", &Q);
 int x[N+1];
 int prefix[N+1];
 x[0] = 0;
 for (int i = 1; i <=N;i++){
   scanf("%d", &x[i]);
 } 
 prefix[0] = x[0];
 for (int i = 1; i <=N; i++){
   prefix[i] = prefix[i-1] + x[i];
 }
 prefix[0] = 0;
 for (int i = 1; i <= Q; i++){
   int a;
   scanf("%d",&a);
   int b;
   scanf("%d", &b);
   int diff = prefix[N]-(prefix[b]-prefix[a-1]);
   printf("%d\n", diff);
 }
  return 0;
}