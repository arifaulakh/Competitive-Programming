#include <bits/stdc++.h>

using namespace std;

int a[50000], b[50000];

int main() {
 int N;
 scanf("%d", &N);
 
 for (int i = 0; i <N;i++){
   scanf("%d", &a[i]);
 } 
 for (int i = 0; i<N;i++){
   scanf("%d",&b[i]);
 }
 sort(a, a+N);
 sort(b, b+N,greater<int>());
 long long count = 0;
 for (int i = 0; i < N; i++){
   count+= a[i]*b[i];
 }
 printf("%lld\n",count);
 return 0;
}