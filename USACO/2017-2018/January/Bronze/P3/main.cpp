#include <bits/stdc++.h>
using namespace std;

int N, cows1[101], cows2[101];
int main(){
    ofstream fout("outofplace.out");
    ifstream fin("outofplace.in");
    fin >> N;
    int count = 0;
    for (int i = 1; i<=N; i++){
        int x; fin >> x;
        cows1[i] = x, cows2[i] = x;
    }
    int n = N+1;
    sort(cows2,cows2+n);
    for (int i = 1; i<=N; i++){
        if (cows1[i]!=cows2[i]){
            count++;
        }
    }
    count-=1;
    fout << count;
    return 0;
}