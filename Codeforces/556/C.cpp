#include<bits/stdc++.h>
using namespace std;
#define MAXN 200005
int n, arr[MAXN], cnt1 = 0, cnt2 = 0;
int main(){
    freopen("data.txt","r",stdin);
    cin >> n;
    for (int i = 1; i<=n; i++){
        cin >> arr[i];
        if (arr[i]==1)cnt1++;
        else cnt2++;
    }
    if (cnt1==n){
        for (int i = 1; i<=n; i++){
            cout << 1 << " ";
        }
        cout << endl;
        return 0;
    }
    if (cnt2==n){
        for (int i = 1; i<=n; i++){
            cout << 2 << " ";
        }
        cout << endl;
        return 0;
    }
    cout << 2 << " " << 1 << " ";
    cnt1--; cnt2--;
    for (int i = 1; i<=cnt2; i++){
        cout << 2 << " ";
    }
    for (int i = 1; i<=cnt1;i++){
        cout << 1 << " ";
    }
    cout << endl;
    return 0;
}