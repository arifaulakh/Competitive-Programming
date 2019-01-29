#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll q, l1, r1, l2, r2;
int main(){
    //freopen("data.txt","r",stdin);
    cin >> q;
    while(q--){
        cin >> l1 >> r1 >> l2 >> r2;
        ll start = max(l1,r1);
        ll end = min(r2,l2);
        if (start==end){
            cout << start << " " << end+1 << endl;
        } 
        else cout << start << " " << end << endl;
    }
    return 0;
}