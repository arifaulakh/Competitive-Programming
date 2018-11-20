#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MAXN = 11;
ll N, arr[MAXN], K, cnt = 0;
int main(){
    freopen("data.txt","r",stdin);
    cin >> N >> K;
    for (int i = N; i>=1; i--){
        cin >> arr[i];
    }
    for (int i = 1; i<=N; i++){
        while(K-arr[i]>=0){
            int q = K/arr[i];
            cnt+=q;
            K-=(arr[i]*q);
            if (K==0){
                cout << cnt << endl;
                return 0;
            }
        }
    }
    cout << -1 << endl;
    return 0;
}