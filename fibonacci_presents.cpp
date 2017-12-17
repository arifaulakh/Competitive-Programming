#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
const int max = 1e9;
int k, n;
int fibonacci[max+1];
int presents[1000001];
int main(){
    fibonacci[1] = 1;
    fibonacci[2] = 1;
    for (int i = 3; i<= max; i++) fibonacci[i] = fibonacci[i-1] + fibonacci[i-2];
    scanf("%d%d", &k, &n);
    for (int i = 1; i <= n; i++) scanf("%d", &presents[i]);
    for (int )



}