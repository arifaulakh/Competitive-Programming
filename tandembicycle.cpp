#include <bits/stdc++.h>

using namespace std;

int a[100], b[100];

int main() {
  int q;
  scanf("%d", &q);
  int N;
  scanf("%d", &N);
 
 for (int i = 0; i <N;i++){
   scanf("%d", &a[i]);
 } 
 for (int i = 0; i<N;i++){
   scanf("%d",&b[i]);
 }
 if (q == 1){
   sort(a, a+N);
   sort(b, b+N);
   int count = 0;
   for (int i = 0; i <N; i++){
    if (a[i] > b[i]){
      count +=a[i];
    }
    if (b[i] > a[i]){
      count += b[i];
    }
    if (a[i] == b[i]){
      count+= a[i];
    }
  }
   printf("%d\n", count);
 }
 
 if (q == 2){
   sort(a, a+N);
  sort(b, b+N,greater<int>());
  int count = 0;
  for (int i = 0; i <N; i++){
    if (a[i] > b[i]){
      count +=a[i];
    }
    if (b[i] > a[i]){
      count += b[i];
    }
    if (a[i] == b[i]){
      count+= a[i];
    }
  }
  printf("%d\n", count);
 }
  
  return 0;
}