#include <bits/stdc++.h>

using namespace std;

int main() {
  
  float I;
  cin >> I;
  float icount = 0;
  for (float i = 1; i<=I;i++){
    float initial;
    cin >> initial;
    icount += initial;
  }
  float S;
  cin >> S;
  float sum = S+I;
  for (float i = I+1; i <= sum; i++){
    float num;
    cin >> num;
    icount += num;
    float total = icount/i;
    cout<<setprecision(3)<<fixed;
    cout <<total << endl;
  }
  return 0;
}
