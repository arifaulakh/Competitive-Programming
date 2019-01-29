#include<bits/stdc++.h>
using namespace std;
#define mp make_pair
#define pb push_back
#define MOD 1000000007
#define MAXN 101
#define endl "\n"
#define readln(x) getline(cin, x);
typedef long long ll;
typedef long double ld;
typedef pair<int, int>pii;
typedef pair<ll, ll> pll;
typedef map<int, int> mii;
typedef map<ll, ll> mll;
ll fpow(ll x, ll n, ll mod){if (n==0) return 1%mod; ll u = fpow(x, n/2, mod); u = (u*u)%mod; if (n%2==1)u = (u*x)%mod;return u;}
ll gcd(ll a, ll b) { return b == 0 ? a : gcd(b, a % b); }

int N, cnt = 0, arr[MAXN], arr2[MAXN], before[MAXN], after[MAXN], c[MAXN];

bool sorted(){
    memset(arr2, 0, sizeof arr2);
    for (int i = 1; i<=N; i++){
        int x = c[i];
        arr2[i] = x;
    }
    sort(arr2, arr2+N+1);
    bool same = true;
    for (int i = 1; i<=N; i++){
        if (c[i]!=arr2[i])same = false;
    }
    return same;
}
int main(){
    //freopen("data.txt","r",stdin);
    ifstream cin("sleepy.in");
    ofstream cout("sleepy.out");
    cin >> N;
    for (int i = 1;i<=N; i++){
        cin >> arr[i];
        int x= arr[i];
        arr2[i] = x;
    }
    sort(arr2, arr2+N+1);
    for (int i = 1; i<=N; i++){
        int num = arr[i];
        int idx = -1;
        for (int j = 1; j<=N; j++){
            if (arr2[j]==num){
                idx = j;
                break;
            }
        }
        if (arr[i]==arr2[N])after[i] = arr2[1];
        else{
            after[i] = arr2[idx+1];
        }
    }
    for (int i = 1; i<=N; i++){
        int num = arr[i];
        int idx = -1;
        for (int j = 1; j<=N; j++){
            if (arr2[j]==num){
                idx = j;
                break;
            }
        }
        if (arr[i]==arr2[1])before[i] = arr2[N];
        else{
            before[i] = arr2[idx-1];
        }
    }
    for (int i = 1; i<=N; i++){
        int x = arr[i];
        c[i] = x;
    }
    if (sorted()){
        cout << 0 << endl;
        return 0;
    }
    bool S = false;
    while(!S){
        int COPY[N+1];
        int start = c[1], idx = -1;
        //find the index of the start in the original array
        for (int i = 1; i<=N; i++){
            if (arr[i]==start){
                idx = i;
                break;
            }
        }
        //idx tells us position of the start in the actual array
        //if the first two are consecutive
        if (c[2]==after[idx]){
            int BEFORE = before[idx];
            int idx_before = -1;
            for (int i = 1; i<=N; i++){
                if (c[i]==BEFORE){
                    idx_before = i;
                    break;
                }
            }
            for (int i = 2; i<=idx_before; i++){
                COPY[i-1] = c[i];
            }
            COPY[idx_before] = start;
            for (int i = idx_before+1; i<=N; i++){
              COPY[i] = c[i];
            }

        }
        //first is largest element
        else if (start==arr2[N]){
            for (int i = 2; i<=N; i++){
                COPY[i-1] = c[i];
            }
            COPY[N] = start;
        }
        else{
            int AFTER = after[idx];
            int idx_after = -1;
            for (int i = 1; i<=N; i++){
                if (c[i]==AFTER){
                    idx_after = i;
                    break;
                }
            }
            for (int i = 2; i<idx_after; i++){
                COPY[i-1] = c[i];
            }
            COPY[idx_after-1] = start;
            for (int i = idx_after; i<=N; i++){
              COPY[i] = c[i];
            }
        }
        for (int i = 1; i<=N; i++){
            int x = COPY[i];
            c[i] = x;
        }
        cnt++;
        // for (int i = 1; i<=N; i++){
        //     cout << c[i] << " ";
        // }
        if ((sorted()))S=true;

    }
    cout << cnt << endl;
    return 0;
}