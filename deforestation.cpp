#include <bits/stdc++.h>

using namespace std;

int main() {
 int N;
 scanf("%d", &N);
 int x[N+1];
 int prefix[N+1];
 x[0] = 0;
 for (int i = 1; i <=N;i++){
   int R;
   scanf("%d", &R);
   x[i] = R;
 } 
 prefix[0] = x[0];
 for (int i = 1; i <=N; i++){
   prefix[i] = prefix[i-1] + x[i];
 }
 int Q;
 scanf("%d", &Q);
 for (int i = 1; i <= Q; i++){
   int a;
   scanf("%d",&a);
   int b;
   scanf("%d", &b);
   printf("%d\n",prefix[b+1] - prefix[a]);
 }
  return 0;
}