#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MAXN = 1e6+6;
ll N, Q, arr[MAXN], ps[MAXN];


int main(){
    ofstream fout("haybales.out");
    ifstream fin("haybales.in");
    //freopen("data.txt","r",stdin);
    fin >> N >> Q;
    for (int i = 1; i<=N; i++){
        fin >> arr[i];
        ps[i]++;
    }
    sort(arr, arr+N+1);
    for (int i = 1; i<=N; i++){
        ps[i]+=ps[i-1];
    }
    for (int i = 1; i<=Q; i++){
        ll a, b; fin >> a >> b;
        auto B = upper_bound(arr, arr+N+1, b);
        auto A = lower_bound(arr, arr+N+1, a);
        fout << abs(B-A) << endl;
    }
    return 0;
}