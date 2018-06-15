#include <bits/stdc++.h>
using namespace std;
int a[15];
int check(int arr[]){
  int cnt = 0;
  for (int i = 1; i<=14; i++){
    if (arr[i]%2==0){
      cnt+=arr[i];
    }
  }
  return cnt;
}
void print(int arr[]){
  for (int i = 1; i<=14; i++){
    cout << arr[i] << " ";
  }
  cout <<endl;
}
int main() {
  freopen("data.txt","r",stdin);
  for (int i = 1; i<=14;i++){
    cin >> a[i];
  }
  int idx = 1, MAX = a[1];
  for (int i = 2; i<=14; i++){
    if (a[i]>MAX){
      MAX = a[i];
      idx = i;
    }
  }
  for (int i = idx+1; i<=(MAX+idx);i++){
    if (i>14){
      a[i-14]++;
    }
    else{
      a[i]++;
      //cout << a[i] << endl;
    }
    
  }
  a[idx]-=a[idx];
  int fin = check(a);
  cout << fin;
  return 0;
}