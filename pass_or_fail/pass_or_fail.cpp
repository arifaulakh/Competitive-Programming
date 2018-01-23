#include <bits/stdc++.h>

using namespace std;

int main() {
 for (int i = 1; i<=10; i++){
   float w1, w2, w3, w4; scanf("%f%f%f%f", &w1, &w2, &w3, &w4);
   int N; scanf("%d", &N);
   int count = 0;
   for (int j=1; j<=N; j++){
     float T, A, P, Q; scanf("%f%f%f%f", &T, &A, &P, &Q);
     float total = ((w1*T)/100) + ((w2*A)/100) + ((w3*P)/100) + ((w4*Q)/100);
     if (total >= 50){
       count++;
     }
  }
  printf("%d\n", count);
 }
 return 0;
}