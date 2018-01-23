#include <bits/stdc++.h>

using namespace std;

int main() {
 int n, m; scanf("%d%d", &n, &m);
 if (n==1||m==1){
     cout << "First" << endl;
 }
 else {
     if ((n+m)%2 == 0) cout << "Second";
     else cout << "First";
 }
  return 0;
}