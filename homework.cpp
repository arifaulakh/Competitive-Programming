#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include<array>
using namespace std;

const int MAX = 10000005;
int primacity[MAX];
int main(){
    for (int i = 2; i< MAX; i++){
        if (primacity[i] == 0){
            for (int j = i; j < MAX; j+= i){
                primacity[j]++;
            }
        }
    }
    int T; scanf("%d", &T);
    int counter = 0;
    for (int i = 1, A, B, K; i <= T; ++i){
        scanf("%d%d%d", &A, &B, &K);
        counter++;
        int pcount = 0;
        for (int i = A; i <=B; i++){
            if (primacity[i] == K) pcount++;
        }
        cout << "Case #"<< counter << ": " << pcount << endl;
    }
    return 0;
}