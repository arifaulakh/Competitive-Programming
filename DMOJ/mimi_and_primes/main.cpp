#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;
const long long MAXN = 100001;
long long N, nums[MAXN];
long long maxPF(long long n)
{
    long long maxPrime = -1;
 
    while (n % 2 == 0) {
        maxPrime = 2;
        n /= 2; 
    }
    for (int i = 3; i <= sqrt(n); i += 2) {
        while (n % i == 0) {
            maxPrime = i;
            n = n / i;
        }
    }
    if (n > 2)
        maxPrime = n;
 
    return maxPrime;
}

long long Euclidean(long long a, long long b){
  long long mod;
  while(true){
    mod = b%a;
    if (mod==0){
      mod = a;
      break;
    }
    b = a;
    a = mod;
  }
  return mod;
}

int main(){
  freopen("data.txt", "r", stdin);
  cin >> N;
  for (long long i = 1; i<=N; i++){
    cin >> nums[i];
  }
  long long gcd = Euclidean(nums[1],nums[2]);
  for (int i = 3; i<=N; i++){
    gcd = Euclidean(gcd, nums[i]);
  }
  if (gcd==1){
    cout << "DNE" << endl;
    return 0;
  }
  long long max = maxPF(gcd);
  cout<< max;
  return 0;
}