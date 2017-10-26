#include <bits/stdc++.h>

using namespace std;

int main() {
    int a;
    cin >> a;
    int b;
    cin >> b;
    int total = 0;
    for (int i = a; i<=b; i++){
        int count = 0;
        for (int j = 1; j<=b; j++){
            if(i%j == 0){
                count ++;
            }
        }
        if (count == 4){
            total ++;
        }
    }
    cout << "The number of RSA numbers between " << a << " and " << b << " is " <<total;
    return 0;
}