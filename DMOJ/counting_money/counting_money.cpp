#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;

int x, y;
int main(){
    int N; cin >> N;
    for (int i = 1; i <= N;i++){
        cin >> x >> y;
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
        if (x == "B"){
            string total = "";
            for (int )
        }
    }
    return 0;
}