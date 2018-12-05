#include <bits/stdc++.h>
using namespace std;

int main(){
    ofstream fout ("shuffle.out");
    ifstream fin ("shuffle.in");
    int N; fin >> N;
    int cows[N+1];
    int order[N+1];
    //int sorted[N+1];
    for (int i = 1; i <= N; i++){
      fin >> order[i];
    }
    for (int i = 1; i <= N; i++){
      fin >> cows[i];
    }
    int sorted1[N+1];
    for (int i = 1; i <= N; i++){
        for(int j = 1; j <= N;j++){
            if(order[j] == i){
                sorted1[j] = cows[i];
            }
        }
    }
    int sorted2[N+1];
    for (int i = 1; i <= N; i++){
        for(int j = 1; j <= N;j++){
            if(order[j] == i){
                sorted2[j] = sorted1[i];
            }
        }
    }
    int sorted3[N+1];
    for (int i = 1; i <= N; i++){
        for(int j = 1; j <= N;j++){
            if(order[j] == i){
                sorted3[j] = sorted2[i];
            }
        }
    }
    for (int i = 1; i <= N; i++){
      fout << sorted3[i] << endl;
    }
    return 0;
}