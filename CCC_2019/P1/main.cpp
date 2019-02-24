#include<bits/stdc++.h>
using namespace std;

int arr[3][3];
int main(){
    //freopen("data.txt","r",stdin);
    string c; cin >> c;
    arr[1][1] = 1, arr[1][2]= 2, arr[2][1] = 3, arr[2][2] = 4;
    for (int i = 0; i<(int)c.length(); i++){
        if (c[i]=='H'){
            int a_1 = arr[1][1], a_2 = arr[2][1], b_1 = arr[1][2], b_2 = arr[2][2];
            arr[1][1] = a_2, arr[2][1] = a_1, arr[1][2] = b_2, arr[2][2] = b_1;
        }
        else{
            int a_1 = arr[1][1], b_1 = arr[2][1], a_2 = arr[1][2], b_2 = arr[2][2];
            arr[1][1] = a_2, arr[2][1] = b_2, arr[1][2] = a_1, arr[2][2] = b_1;
        }
    }
    for (int i = 1; i<=2; i++){
        for (int j = 1; j<=2; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}