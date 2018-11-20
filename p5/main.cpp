#include<bits/stdc++.h>
using namespace std;
const int MAXN = 1e5+5;
int N, M, K, treaties[MAXN], terms[MAXN], preference[21];
int main(){
    freopen("data.txt","r",stdin);
    cin >> N >> M >> K;
    for (int i = 1; i<=N; i++){
        cin >> treaties[i];
        terms[i] = treaties[i];
    }
    for (int m = 1; m<=M; m++){
        int l, r; cin >> l >> r;
        for (int i = 1; i<=K; i++){
            cin >> preference[i];
        }
        vector<int> segment;
        for (int i = 1; i<=N; ++){
            segment.push_back(treaties[i]);
        }
        for (int i = 1; i<=K; i++){
            int country = preference[i];
            
        }

    }
    for (int i = 1; i<=N; i++){
        cout << terms[i] << " ";
    }
    cout << endl;
    return 0;
}