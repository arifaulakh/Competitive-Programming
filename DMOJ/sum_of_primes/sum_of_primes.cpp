#include <iostream>
#include <algorithm>  
#include <string>
#include <array>
#include <cmath>

using namespace std;

int prefix[100001];

int main(){
    prefix[2] = 2;
    int numbers[5];
    for (int i= 0; i < 5; i++){
      scanf("%d", &numbers[i]);
    }
    for (int i = 2; i<= 100001; i++){
        bool isprime = true;
        for (int j = 2; j <= sqrt(i); j++){
            if (i%j == 0){
                isprime = false;
            }
        }
        if (isprime){
            prefix[i] = prefix[i-1] + i;
        }
        else{
            prefix[i] = prefix[i-1];
        }
    }
    for (int i = 0; i < 5; i++){
       printf("%d\n", prefix[numbers[i]]);
    }

    return 0;
}