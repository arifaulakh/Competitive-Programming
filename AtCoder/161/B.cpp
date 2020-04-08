#include<bits/stdc++.h>
using namespace std;
int arr[101], M, N, cnt = 0, votes = 0;
int main(){
  cin >> N >> M;
  for (int i = 1; i<=N; i++){
    cin >> arr[i];
    votes += arr[i];
  }
  double thresh = (double)votes/((double) M*4);
  for (int i = 1; i<=N; i++){
    if ((double)arr[i] >= thresh)cnt++;
  }
  if (cnt >= M) cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}
