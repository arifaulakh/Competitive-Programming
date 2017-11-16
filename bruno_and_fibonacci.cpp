#include <iostream>
#include <string>
#include <stdio.h>
#include <math.h>
using namespace std;

bool isSquare(int x){
    int s = sqrt(x);
    return(s*s == x);
}
bool isFib(int n){
    return (isSquare(5*n*n+4)||isSquare(5*n*n-4));
}
int main(){
    int N; cin >> N;
    string S; cin >> S;
    bool isDNA = true;
    char letter = 'A';
   
    for (int i = 0; i < S.length(); i++){
        if (isFib(i+1)) {
            if (S[i]!=letter) {
                isDNA = false;
                break;
            }
        } else {
            if (S[i]==letter) {
                isDNA = false;
                break;
            }
        }
       
    }
    
    if (isDNA){
        cout <<"That's quite the observation!" << endl;
    }
    else{
        cout << "Bruno, GO TO SLEEP" << endl;
    }
    return 0;
}