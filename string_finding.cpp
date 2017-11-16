#include <iostream>
#include <string>
using namespace std;

int main(){
    string S, T; 
    cin >> S;
    cin >> T;
    int index = -1;
    for (int i = 0; i +T.size()-1< S.size(); i++){
        bool isString = true;
        int a = T.size()-1;
        if (S[i] == T[0] && S[i+a] == T[a]){
            for (int j = 0; j <= a; j++){
                if (S[i+j] == T[j]){
                    continue;
                }
                else{
                    isString = false;
                    break;
                }
            }
            if(isString){
                index = i;
                cout << index << endl;
                
                return 0;
            }
            else{
                index = -1;
            }
        }
    }
    cout << "-1\n";
    return 0;
}