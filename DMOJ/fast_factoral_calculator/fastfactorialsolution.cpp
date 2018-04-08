#include <bits/stdc++.h>

using namespace std;

int main() {
 long long int N;
 scanf("%lld",&N);
 for (long long int i = 1; i <=N; i++){
   long long int x;
   scanf("%lld", &x);
   if (x >= 34){
       printf("0\n");
       continue;
   }
   long long int total = 1LL;
   for (long long int j = 1LL; j <= x; j++){
       total*=j;
       total %=(1LL<<32);
   }
   printf("%lld\n", total);
  }
   
  return 0;
}