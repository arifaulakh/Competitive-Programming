#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll N;
int main(){
    freopen("data.txt","r",stdin);
    cin >> N;
    if (N%2==0){
        cout << N*(N/2) << endl;
    }
    else{
        ll a = (N-1)/2;
        cout << N*a+a << endl;
    }
    return 0;
}