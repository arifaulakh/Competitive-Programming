#include <bits/stdc++.h>

using namespace std;

int frequency[1001];

int abs(int a, int b){return (a<b) ? b-a : a-b;}

int main() {
 int N;
 scanf("%d", &N);
 
 for (int i = 1; i <=N;i++){
   int R;
   scanf("%d", &R);
   frequency[R]++;
 } 
 int max = 0;
 int index = 0;
 for (int i = 1; i <=1000; i++){
   if (frequency[i] > max){
     max = frequency[i];
     index = i;
   }
 }
 int max2 = 0;
 int index2 = 0;
 for (int i=1; i<= 1000; i++){
   if (i==index)
     continue;
   if (frequency[i] > max2){
     max2 = frequency[i];
     index2 = i;
   }
   if (frequency[i] == max2){
     if (abs(index,index2) < abs(index,i))
       index2 = i;
   }
 }
 printf("%d", abs(index,index2));
 return 0;
}