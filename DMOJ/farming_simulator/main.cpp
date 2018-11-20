#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MAXN = 1e5 + 5;
ll N, M, arr[MAXN], cnt = 0;

int main(){
    freopen("data.txt","r",stdin);
    cin >> N >> M;
    for (int i = 1; i <= N; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + N + 1);
    for (int i = 1; i <= M; i++)
        arr[i] = 0;
    for (int i = 1; i <= N; i++)
    {
        cnt += arr[i];
    }
    cout << cnt << endl;
    return 0;
}