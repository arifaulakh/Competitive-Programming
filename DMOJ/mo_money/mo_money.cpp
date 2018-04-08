#include <iostream>
using namespace std;
int set[20], solution[16][int(1e6)+1];
int count(int N, int t){
    for (int i = 0; i<=N; i++){
        solution[i][0] = 1;
    }
    for (int i = 1; i<= t; i++){
        solution[0][i] = 0;
    }
    for (int i = 1; i<=N; i++){
        for (int j = 1; j<= t; j++){
            if (set[i-1]<=j){
                solution[i][j] = solution[i-1][j] + solution[i-1][j-set[i-1]];
            } else{
                solution[i][j] = solution[i-1][j];
            }
        }
    }
    return solution[N][t];
}
int main(){
    int N, t; scanf("%d%d",&N, &t);
    for (int i = 0; i<N; i++){
        scanf("%d", &set[i]);
    }
    cout << count(N,t) << endl;
    return 0;
}