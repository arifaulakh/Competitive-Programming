#include<iostream>
using namespace std;
typedef long long ll;
const ll MOD = 1e9;
ll a,b,c,d, A, B, N;

void fib(ll n,ll ans[])
{
   if(n == 0){
     ans[0] = 0;
     return;
   }
   fib(n/2,ans);
   a = ans[0];
   b = ans[1];
   c = (a * (2*b - a)) % MOD;
   if (c<0) c+=MOD;
   d = (a*a + b*b) % MOD;
   if(n%2 == 0){
     ans[0] = c%MOD;
   }
   else{
     ans[0] = d%MOD;
   }
}

int main(){
 freopen("data.txt", "r", stdin);
 cin >> A >> B >> N;
 ll ans[1]={0};
 fib(N-1,ans);
 ll final = (A*ans[0])%MOD;
 fib(N,ans);
 final += (B*ans[0])%MOD;
 final = (final+MOD)%MOD;
 cout << final;
 return 0;
}