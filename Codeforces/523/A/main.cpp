#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n, S;
int main(){
    freopen("data.txt","r",stdin);
    cin >> n >> S;
    if (S % n == 0) cout << S / n << endl;
    else cout << ceil((double)S / (double)n) << endl;
    return 0;
}