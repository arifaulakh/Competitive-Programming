#include<bits/stdc++.h>
using namespace std;
int arr[2000005], dist[2000005], K, N;
int main(){
  cin >> K >> N;
  for (int i = 1; i<=N; ++i){
    cin >> arr[i];
  }
  for (int i = 1; i<N; ++i){
    dist[i] = arr[i+1] - arr[i];
  }
  int total = (K - arr[N]) + arr[1];
  for (int i = 1; i<N; ++i){
    total = max(total, dist[i]);
  }
  cout << K - total << endl;
  return 0;
}