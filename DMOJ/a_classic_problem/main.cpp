#include<bits/stdc++.h>
using namespace std;
const int MAXN =  3e6+6, K = 25;
int N, k, arr[MAXN], LOG[MAXN+1], st[MAXN][K], st2[MAXN][K], cnt = 0, l = 0;

void compute_log(){
	LOG[1] = 0;
	for (int i = 2; i<=MAXN; i++){
		LOG[i] = LOG[i/2]+1;
	}
}
void precompute_min(){
	for (int i = 0; i<N; i++){
		st[i][0] = arr[i];
	}
	for (int j = 1; j<=K; j++){
		for (int i = 0; i+(1<<j)<=N; i++){
			st[i][j] = min(st[i][j-1], st[i + (1 << (j - 1))][j - 1]);
		}
	}
}
void precompute_max(){
	for (int i = 0; i<N; i++){
		st2[i][0] = arr[i];
	}
	for (int j = 1; j<=K; j++){
		for (int i = 0; i+(1<<j)<=N; i++){
			st2[i][j] = max(st2[i][j-1], st2[i + (1 << (j - 1))][j - 1]);
		}
	}
}

int compute_max(int L, int R){
    int j = LOG[R-L+1];
	int MAX = max(st2[L][j], st2[R - (1 << j) + 1][j]);
    return MAX;
}
int compute_min(int L, int R){
    int j = LOG[R - L + 1];
    int MIN = min(st[L][j], st[R - (1 << j) + 1][j]);
    return MIN;
}
int main(){
	freopen("data.txt","r",stdin);
	cin >> N >> k;
	for (int i = 0; i<N; i++){
		cin >> arr[i];
	}
	compute_log();
	precompute_min();
	precompute_max();
    // for (int i = 0; i<N; i++){
    //     if ((compute_max(l,i)-compute_min(l,i))<=k&&l<=i){
    //         cnt++;
    //         cout << l << " " << i;

    //     }
    //     else l++;
    //     cout << endl;
    // }
    for (int i = 0; i<N; i++){
        for (int j = i; j<N; j++){
            if ((compute_max(i,j)-compute_min(i,j))<=k)cnt++;
        }
    }

    cout << cnt << endl;
	return 0;
}