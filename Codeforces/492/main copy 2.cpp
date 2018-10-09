#include<bits/stdc++.h>
using namespace std;
const int MAXN = 202;
int N, a[MAXN], c[MAXN],cnt = 0;

int main(){
    freopen("data.txt","r",stdin);
    cin >> N;
    for (int i = 1; i<=2*N; i++){
        int x; cin >> x;
        a[i] = x;
        c[i] = x;
    }
    sort(c,c+(2*N)+1);
    for (int i = 1; i<=2*N; i++){
        if (a[i]!=c[i]){
            cnt++;
        }
    }
    if (cnt>2){
        cout << cnt-1;
    }
    else cout << cnt;
    return 0;
}