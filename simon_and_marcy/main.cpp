#include<iostream>
#include<algorithm>
using namespace std;

int C, M, N, K, dp[1009];

int main(){
    cin >> C >> M;
    for (int i = 0; i<C; i++){
        cin >> N >> K;
        for (int i = M; i>=K; i--){
            dp[i] = max(dp[i], dp[i-K]+N);
        }
    }
    int MAX = 0;
    for (int i = 0; i<=M; i++){
        MAX = max(MAX, dp[i]);
    }
    cout << MAX << endl;
    
}