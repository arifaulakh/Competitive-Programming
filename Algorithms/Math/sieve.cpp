#include<bits/stdc++.h>
using namespace std;
const int MAXN = 1e6+6;
int s[MAXN];
void sieve(int n){
    s[1] = -1;
    for (int x = 2; x<=n; x++){
        if (s[x])continue;
        for (int u = 2*x; u<=n; u+=x){
            s[u] = x;
        }
    }
}
