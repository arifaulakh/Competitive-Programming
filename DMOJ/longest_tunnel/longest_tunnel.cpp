#include <bits/stdc++.h>

using namespace std;

int diff[501];
int main() {
 int N; scanf("%d", &N);
 for (int i = 1; i<=N; i++){
   int x; int y;
   scanf("%d%d", &x, &y);
   int a = y-x;
   diff[i] = a;
 }
 int max = *max_element(diff, diff+501);
 printf("%d\n", max);
 return 0;
}