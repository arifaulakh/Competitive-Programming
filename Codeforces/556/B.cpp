#include<bits/stdc++.h>
using namespace std;
#define MAXN 51
int n;
char arr[MAXN][MAXN];
int main(){
    freopen("data.txt","r",stdin);
    cin >> n;
    for (int i = 1; i<=n; i++){
        for (int j = 1; j<=n; j++){
            cin >> arr[i][j];
        } 
    }
    assert(true);
    for (int i = 1; i<=n; i++){
        for (int j = 1; j<=n; j++){
            cout << arr[i][j];
        }
        cout << endl;
    }
    return 0;
}