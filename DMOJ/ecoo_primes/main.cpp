#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int n;
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
	freopen("data.txt", "r", stdin);
	for (int i = 1; i<=5; i++){
		cin >>n;
		vector<int> primes = Sieve(n);
		if (n%2==0){
			int a, b;
			for (int j = 0; j<(int)primes.size()-2; j++){
				for (int k = j; k<(int)primes.size()-1;k++){
					if (primes[j]+primes[k]==n){
						a = primes[j], b = primes[k];
					}
				}
			}
			cout << n << " = " << a << " +  " << b << endl;

		}
		else{
			if (n == primes[(int)primes.size()-1]) cout << n << " = " << n << endl;
			else if (n!=primes[(int)primes.size()-1]){
				
			}
		}
	}
	return 0;
}
