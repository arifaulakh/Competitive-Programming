#include <bits/stdc++.h>
using namespace std;

int MC(int amount, int d[], int size, int C[])
{  
    C[0] = 0;
    for(int j = 1; j <= amount; j++) {
	C[j] = INT8_MAX;
	for(int i = 0; i < size; i++) {
	    if(j >= d[i] && 1 + C[j-d[i]] < C[j] ) {
		C[j] = 1 + C[j-d[i]];
	    }
        }
    }     
    return C[amount];
}

int main()
{
    int amount; cin >> amount;
    int clubs; cin >> clubs;
    int d[clubs];
    for (int i = 0; i < clubs; i++){
      cin >> d[i];
    }
    int size = sizeof(d)/sizeof(d[0]);
    int *C = new int[amount+1];
    int ans = MC(amount, d, size, C);
    if (ans != 2147483647 && ans <= amount){
      cout << "Roberta wins in " << ans << " strokes. " << endl;
    }
    if (ans == 2147483647 || ans > amount){
      cout << "Roberta acknowledges defeat." << endl;
    }


    return 0;
}