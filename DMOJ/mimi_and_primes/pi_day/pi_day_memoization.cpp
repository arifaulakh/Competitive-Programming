#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>


using namespace std;

vector< vector<int> > dp(251, vector<int>(251, -1));
int piDay(int n, int k){
  if (n < k){
    return 0;
  }
  if (k == 1||k==n){
    return 1;
  }
  if (dp[n][k]!= -1){
    return dp[n][k];
  }
  dp[n][k] = piDay(n-1, k-1) + piDay(n-k, k);
  return dp[n][k];
}
int main() {
 int n, k;scanf("%d\n%d", &n, &k);
 printf("%lld", piDay(n,k));
  return 0;
}