#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MAXN =1e6+6;
ll N, K, arr[MAXN], MAX = 0, prefix1[MAXN], prefix2[MAXN];
int main(){
    //freopen("data.txt","r",stdin);
    cin >> N >> K;
    for (int i = 1; i<=N; i++){
        cin >> arr[i];
    }  
    if (N==K){
        for (int i = 1; i<=N; i++){
            MAX = max(MAX, arr[i]);
        }
        cout << MAX << endl;
        return 0;
    }
    prefix1[1] = arr[1];
    for (int i = 2; i<=N; i++){
        prefix1[i] = max(prefix1[i-1], arr[i]);
    }
    prefix2[N] = arr[N];
    for (int i = N-1; i>=1; i--){
        prefix2[i] = max(prefix2[i+1], arr[i]);
    }
    for (int i = 1; i<=K; i++){
        int x = N-i;
        ll m1 = 0, m2 = 0;
        if (x<=K){
            MAX = max(MAX, prefix1[i]+prefix2[i+1]);
        }
    }
    cout << MAX << endl;
    return 0;
}