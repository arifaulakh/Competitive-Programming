#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MAXN = 1e6+6;
ll N, arr[MAXN], arr2[MAXN],cnt = 0;
int main(){
    ofstream cout ("sort.out");
    ifstream cin ("sort.in");
    //freopen("data.txt","r",stdin); 
    cin >> N;
    for (int i = 1; i<=N; i++){
        cin >> arr[i];
        arr2[i] = arr[i];
    }
    sort(arr2, arr2+N+1);
    bool sorted = false;
    while(!sorted){
        sorted = true;
        // for (int i = 1; i<=N; i++){
        //     cout << arr[i] << " ";
        // }
        // cout << endl;
        cnt++;
        for (int i = 1; i<N; i++){
            if (arr[i]>arr[i+1]){
                int a = arr[i], b = arr[i+1];
                arr[i] = b, arr[i+1] = a;
                sorted = false;
            }
        }
    }
    cout << cnt << endl;
    return 0;
}