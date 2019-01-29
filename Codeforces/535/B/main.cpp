#include<bits/stdc++.h>
using namespace std;
const int MAXN = 129;
int N, arr[MAXN], MAXNUM = -1, MAX2 = -1;
bool seen[MAXN];

vector<int> factorize(int x){
    vector<int> factors;
    for (int i = 1; i<=x; i++){
        if (x%i==0)factors.push_back(i);
    }
    return factors;
}
int main(){
    freopen("data.txt","r",stdin);
    cin >> N;
    for (int i = 1; i<=N; i++){
        cin >> arr[i];
        MAXNUM = max(MAXNUM, arr[i]);
    }
    vector<int> fac1 = factorize(MAXNUM);
    for (int j = 0; j<(int)fac1.size(); j++){
        int FACTOR = fac1[j];
        bool found = false;
        for (int i =1; i<=N; i++){
            if (FACTOR==arr[i]){
                seen[i] = true;
                found = true;
                break;
            }
            if (found)break;
        }
    }
    for (int i = 1; i<=N; i++){
        if (!seen[i]){
            MAX2 = max(MAX2, arr[i]);
        }
    }
    cout << MAXNUM << " " << MAX2 << endl;
    return 0;
}