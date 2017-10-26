#include <bits/stdc++.h>

using namespace std;

int main() {
 for (int i = 1; i <= 5; i++){
   int d;
   cin >> d;
   int m;
   cin >> m;
   int y;
   cin >> y;
   
   if (y < 1997){
     cout << "old enough" <<"\n";
   }
   if (y > 1997){
     cout << "too young" <<"\n";
   }
   if (y == 1997){
     if (m < 10){
       cout << "old enough" << "\n";
     }
     if (m > 10){
       cout << "too young" << "\n";
     }
     if (m == 10){
       if (d<= 27){
         cout << "old enough" << "\n";
       }
       if (d > 27){
         cout << "too young" << "\n";
       }
     }
   }
 }
  return 0;
}