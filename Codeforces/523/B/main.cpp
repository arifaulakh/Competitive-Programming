#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MAXN = 1e5+5;
ll n, m, a[MAXN], row[MAXN], rem[MAXN], cnt = 0;
int main(){
    freopen("data.txt","r",stdin);
    cin >> n >> m;
    ll height = 0, pos = 0;
    for (int i = 1; i<=n; i++){
        cin >> a[i];
        height = max(height, a[i]);
        if (a[i]>0)row[i] = 1;
    }
    for (int i = 1; i<=n; i++){
        if (row[i]==1){
            
        }
    }
    
    return 0;
}
