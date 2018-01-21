#include<iostream>
#include<vector>
#include<cstring>
using namespace std;
int N, X;

vector<int> Sieve(int N){
    vector<int> primes;
    vector<bool> isprime(N+1, true);
    for (int i = 2; i*i<=N; i++){
        if(isprime[i]){
            for (int j = i*i; j<=N; j+=i){
                isprime[j] = false;
            }
        }
    }
    for (int i = 2; i <= N; ++i) if (isprime[i]) primes.push_back(i);
    return primes;
}
int main(){
    //freopen("data.txt", "r", stdin);
    scanf("%d%d", &N, &X);
    vector<int> prime = Sieve(N);
    int count = 0;
    for (int p = 0; p < prime.size(); p++){
        if(p > N) break;
        int rem = N-prime[p];
        count += (rem / X)*2 + ( (rem%X==0) ? 1 : 2 );


    }
    printf("%d\n", count);
    return 0;
}