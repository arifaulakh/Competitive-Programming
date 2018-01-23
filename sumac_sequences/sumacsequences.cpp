#include <bits/stdc++.h>

using namespace std;

int main() {
  int a;
  int b;
  cin >> a;
  cin >> b;
  int count = 0;
  while(a >=0){
    int x = a;
    a = b;
    b = x-b;
    count++;
  }
  
  cout << count;
  return 0;
}