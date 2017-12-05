#include <stdio.h>
#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;

int ps[1000006];
int main() {
 int N, M, Q; scanf("%d%d%d", &N, &M, &Q);
 for (int i = 1; i <= N; i++){
   int u; scanf("%d", &u);
   ps[i] = u;
 }
sort(ps2, ps2+N);
 for (int i = 2; i <= 1000006; i++){
   ps2[i] = ps2[i] + ps2[i-1];
 }
 for (int i = 1, a, b; i <= Q; i++){
   scanf("%d%d", &a, &b);
   int mx, mn;
   int *c = find(ps, ps+N, a);
   int *d = find(ps, ps+N, b);
   if (c>d) mx = c, mn = d;
   if (d>c) mx = d, mn = c;
   int *diff = ps2[mx]-ps2[mn];
   if (diff/2 < Q){
    printf("%s", "Not enough\n");
   }
   if (diff/2 >= Q){
    printf("%s", "Enough\n");
   }
 }
  return 0;
}