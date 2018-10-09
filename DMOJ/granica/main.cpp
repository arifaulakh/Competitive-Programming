#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MAXN = 101;
ll N, num[MAXN];
int main(){
    freopen("data.txt","r",stdin);
	cin >> N;
    for (int i = 1; i<=N; i++){
        cin >> num[i];
    }
    sort(num, num+N+1);
    int MIN = num[1];
    // for (int i = 2; i<=MIN; i++){
    //     int mod = MIN%i;
    //     bool ismod = true;
    //     for (int j = 2; j<=N; j++){
    //         if (num[j]%i!=mod)ismod = false;
    //     }
    //     if (ismod) cout << i << " ";
    // }
    cout << MIN;
	return 0;
}