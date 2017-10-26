#include <bits/stdc++.h>

using namespace std;

int main() {
    int x;
    cin >> x;
    int m;
    cin >> m;
    int count = 0;
    for (int n = 0; n<=m; n++){
        int prod = x*n;
        if(prod%m == 1){
            cout << n<<"\n";
            count ++;
            break;
        }
    
    }
    if (count == 0){
      cout << "No such integer exists.";
    }
    
    return 0;
}