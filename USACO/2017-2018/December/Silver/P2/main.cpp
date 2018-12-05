#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll>pll;
const ll MAXN = 1e6+6;
ll N, G, cnt = 0, curr = -1, max_day = -1;
pll<pll, ll> queries[MAXN];
int main(){
    //ofstream cout ("measurement.out");
    //ifstream cin ("measurement.in");
    freopen("data.txt","r",stdin);
    cin >> N >> G;
    for (int i = 1; i<=N; i++){
        ll day, cow, c; char sign; 
        cin >> day >> cow >> sign >> c;
        if (c=='-')c*=-1;
        
        max_day = max(max_day, day);
    }
    for (int i = 1; i)
    return 0;
}