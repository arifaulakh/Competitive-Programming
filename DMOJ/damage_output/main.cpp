#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MAXN = 5e5 + 1;
ll N, M, l = 1, arr[MAXN], ps[MAXN], MIN = MAXN;
int main()
{
    freopen("data.txt", "r", stdin);
    cin >> N >> M;
    for (int i = 1; i <= N; i++)
    {
        cin >> arr[i];
        ps[i] = ps[i - 1] + arr[i];
    }

    for (int i = 1; i <= N; i++)
    {
        while(ps[i]-ps[l-1]>=M){
            MIN = min(MIN, i-l+1);
            l++;
        }
    }
    if (ps[N]<M)
        cout << -1 << endl;
    else
        cout << MIN << endl;
    return 0;
}