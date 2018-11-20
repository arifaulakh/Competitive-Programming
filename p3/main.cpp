#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MAXN = 21;
ll N, d;
ll gcd(ll a, ll b){
    ll mod;
    while (true){
        mod = b % a;
        if (mod == 0){
            mod = a;
            break;
        }
        b = a;
        a = mod;
    }
    return mod;
}
int main(){
    cin >> N;
    for (int t = 1; t<=N; t++){
        cin >> d;
        ll terms[d+2];
        bool zero = false;
        vector<ll> roots;
        for (int i = 1; i<=d+1; i++){
            cin >> terms[i];
            if (terms[i]==0)zero = true;
        }
        ll GCD = gcd(terms[1],terms[2]);
        if (!zero){
            for (int i = 2; i<=d; i++){
                GCD = gcd(terms[i],terms[i+1]);
            }
            for (int i = 2; i<=d+1;i++){
                terms[i]/=GCD;
            }
        }
        
    }
    return 0;
}