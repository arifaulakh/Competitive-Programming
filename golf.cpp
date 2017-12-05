#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int MC(int amount, int d[])
{  
    int function[amount+1];
    int min, t;
    function[0] = 0;
    for (int i =1; i<=distance; i++) min = 9999;
        for (int j = 0; j < distance; i++){
            t = i - dp[j];
            if (t >= 0 && function[t]>=0 && function[t] < min) min = function[t];
        }
        if (min < 9999) function[i] = min+1;
        else function[i] = -1;
    }
    return function[amount];
}

int main()
{
    int amount; cin >> amount;
    int clubs; cin >> clubs;
    int d[clubs];
    for (int i = 0; i < clubs; i++){
      cin >> d[i];
    }
    distance = sizeof(d)/sizeof(d[0]);
    int ans = MC(amount, d[]);
    if (ans != INT8_MAX && ans <= amount){
      cout << "Roberta wins in " << ans << " strokes. " << endl;
    }
    if (ans == INT8_MAX || ans > amount){
      cout << "Roberta acknowledges defeat." << endl;
    }


    return 0;
}