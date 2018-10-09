#include<iostream>
#include<string>
#include<fstream>
using namespace std;
const int MAXN = 101;

int N;
string mothers[MAXN], daughters[MAXN];

int main(){
  freopen("data.txt","r",stdin);
  string A, B;
  cin >> N >> A >>B;
  for (int i = 1; i<=N; i++){
    cin >> mothers[i] >> daughters[i];
  }
  string MotherA, MotherB;
  for (int i = 1; i<=N; i++){
    if (daughters[i]==A) MotherA = mothers[i];
  }
  for (int i = 1; i<=N; i++){
    if (daughters[i]==B) MotherB = mothers[i];
  }
  if(MotherA==MotherB) cout << "SIBLINGS" << endl;

  return 0;
}