#include <iostream>
#include <stdio.h>
#include <math.h>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){
    int count, count2; count = 0, count2 = 0;
    int N, A, B, M; scanf("%d%d%d%d", &N, &A, &B, &M);
    for (int i = 0; i< N; i++){
        int sum = (A*(pow(B, i)))%M;
        count+=sum;
        count2+=pow(sum,2);
    }
    int total = pow(count,2) - count2;
    cout << total << endl;
    return 0;
}