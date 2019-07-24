#include<bits/stdc++.h>
using namespace std;
#define mp make_pair
#define pb push_back
#define first fi
#define second se
#define MOD 1000000007
#define MAXN 1000006
#define endl "\n"
#define readln(x) getline(cin, x);
typedef long long ll;
typedef long double ld;
typedef pair<int, int>pii;

int n,m,d,clean,dirty,a,cnt;int arr[1001];

int main() {
    freopen("data.txt","r", stdin);
    for(int z = 0;z<2;z++){
        for(int i = 0;i<=1000;i++){arr[i] = 0;}
        scanf("%d%d%d", &n, &m, &d);
        clean = n;dirty = 0;cnt = 0;
        for (int i = 0; i < m; i++)
        {
            scanf("%d", &a);arr[a]++;
        }
        for (int i = 1; i <= d; i++)
        {
            if (clean == 0)
            {
                clean = dirty;dirty = 0;cnt++;
            }
            if (arr[i] > 0)
            {
                clean+=arr[i];
            }
            dirty++;clean--;
        }
        printf("%d\n", cnt);
    }
    return 0;
}
