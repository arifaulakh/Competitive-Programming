#include <iostream>
#include <algorithm>
#include <cmath>
#include <array>
using namespace std;

int main(){
    int k; scanf("%d", &k);
    bool isprime = true;
    while(isprime){
        if (k == 1){
            k = 2;
        }
        if (k == 2){
            break;
        }
        for (int i = 2; i<=sqrt(k); i++){
            if (k%i == 0){
                isprime = false;
                break;
            }
            else{
                continue;
            }
        }
        if (isprime){
            break;
        }
        else{
            k++;
            isprime = true;
            continue;
        }
    }
    printf("%d\n", k);
    return 0;
}