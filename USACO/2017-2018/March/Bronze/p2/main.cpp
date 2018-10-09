#include <iostream>
#include <fstream>
using namespace std;

int cows[100];
int N, M, K;
int team = 0, individual = 0;
int main(){
	ofstream fout ("milkorder.out");
    ifstream fin ("milkorder.in");
  fin >> N >> M >> K;
  int order[M];
  for (int i = 0; i<M; i++){
    fin >> order[i];
  }
  int position[K];
  for (int i = 0; i<K; i++){
    int c, p; fin >> c >> p;
    cows[p-1] = c;
    position[i] = c;
  }
  int x;
  int y;
  for (int i = 0; i<M; i++){
    for (int j = 0; j<K; j++){
      if(order[i]==position[j]){
        x = order[i];
        y = order[i-1];
      }
    }
  }
  for (int i = 0; i<N; i++){
    if (cows[i]==x){
      cows[i-1] = y;
    }
  }
  int final;
  for (int i = 0; i<N; i++){
   if (cows[i]==0){
      final = i+1;
      break;
   }
  }
  fout << final;
   return 0;
}