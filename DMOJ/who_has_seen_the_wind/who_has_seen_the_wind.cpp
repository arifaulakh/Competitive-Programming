#include <bits/stdc++.h>

using namespace std;

int main() {
 int h, M;
 cin >> h;
 cin >> M;
 int count = 0;
 for (int t = 1; t <=M; t++){
     int a = -6*pow(t,4) + h*pow(t,3) + 2*pow(t,2) + t;
     if (a <= 0){
         count += t;
         break;
     }
     else{
         continue;
     }
 }
 if (count > 0){
     cout << "The balloon first touches ground at hour: " << count << endl;
 }
 if (count <= 0){
     cout << "The balloon does not touch ground in the given time." << endl;
 }
 
  return 0;
}