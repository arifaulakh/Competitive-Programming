#include<bits/stdc++.h>
using namespace std;
const int MAXN = 1e5+5;
int N, arr[MAXN],rev_arr[MAXN], K, min_val[MAXN],MIN, ps[MAXN];
double FIN[MAXN];
int main(){
    ofstream fout ("homework.out");
    ifstream fin ("homework.in");
    //freopen("data.txt","r",stdin);
    fin >> N;
    for (int i = 1; i<=N; i++){
        fin >> arr[i];
        ps[i] = arr[i]+ps[i-1];
    }
    MIN = arr[N];
    for (int i = N-1; i>=2; i--){
        MIN = min(MIN, arr[i]);
        min_val[i-1] = MIN;
    }
    for (int i = 2; i<=N-1; i++){
        int S = ps[N]-ps[i-1], length = N-i;
        S-=min_val[i-1];
        FIN[i-1] = (double)S/(double)length;
    }
    double M = -1;
    for (int i = 1; i<=N-2; i++){
        M = max(M,FIN[i]);
    }
    for (int i = 1; i<=N-2; i++){
        if (FIN[i]==M)fout << i << endl;
    }
    return 0;
}