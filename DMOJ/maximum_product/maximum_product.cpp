#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;

int main(){
   int N; scanf("%d", &N);
   int arr[N];
   
   for (int i = 0; i < N; i++){
       scanf("%d", &arr[i]);
   }
   sort(arr, arr+N);
   int negcount = 0;
   int total = 1;
   bool isZero = true;
   for (int i = 0; i <N; i++){
     if (arr[i] == 0){
       isZero = true;
     }
     else{
       isZero = false;
       break;
     }
   }
   if (isZero){
     total*=0;
   }
   else{
     total = total;
   }
   for (int i = 0; i < N; i++){
       if (arr[i] < 0){
           negcount++;
           if (N == 1){
             total*= arr[i];
           }
       }
       if (arr [i] > 0){
           total*= arr[i];
       }
       if(arr[i] == 0){
         
           if ((arr[N-1] == 0 && negcount %2 != 0)|| N== 1 ){
               total *= max(arr[i], arr[i-1]);
           }
           else{
               total *=1;
           }
       }
   }
   if (negcount%2 == 0){
       for (int i = 0; i < negcount; i++){
           total*=arr[i];
       }
   }
   if (negcount%2 != 0){
       for (int i = 0; i < negcount-1; i++){
           total*= arr[i];
       }
   }
   printf("%d\n", total);
   return 0;
}