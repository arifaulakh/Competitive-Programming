#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;

int main(){
    int N; cin >> N;
    for (int i = 1; i <= N;i++){
        string x; cin >> x;
        string y; cin >> y;
        if (x == "A"){
            double total = 0;
            char letter = "1";
            for (int j = 0; j < y.length(); j++){
                if (y[j] == leter){
                    double diff = y.length()-j;
                    double sum = pow(-2,diff-1);
                    total += sum;
                }
            }
            cout << total << endl;

        }
    }
    return 0;
}