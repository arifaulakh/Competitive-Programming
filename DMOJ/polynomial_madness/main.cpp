#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll N, d;

ll f(vector<ll> eq, ll x, ll degree){
    ll sum = 0;
    for (int i = 0; i<=degree; i++){
        sum += (pow(x,degree-i)*eq[i]);
    }
    return sum;
}
int main(){
    freopen("data.txt","r",stdin);
    cin >> N;
    while (N--){
        cin >> d;
        vector<ll> equation, roots;
        for (int i = 1; i<=d+1; i++){
            ll r; cin >> r;
            equation.push_back(r);
        }
        for (int i = -150; i<=150; i++){
            if (f(equation, i, d)==0){
                roots.push_back(i);
            }
        }
        for (auto u :roots){
            cout << u << " ";
        }
        cout << endl;

    }
    return 0;
}