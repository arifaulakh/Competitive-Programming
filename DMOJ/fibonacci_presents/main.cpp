#include<bits/stdc++.h>
using namespace std;
const int MAXN = 1e6+1;
int n, k, p[MAXN],c[MAXN], MC = 0, CNT = 0; 

int fib(int x){
	double a = 1/(sqrt(5));
	double b = (1+sqrt(5))/2;
	double c = (1-sqrt(5))/2;
	return (a*(pow(b,x)-pow(c,x)));

}
int main(){
	freopen("data.txt", "r",stdin);
	cin >> k >> n;
	if (k>n+1){
		cout << -1;
		return 0;
	}
	for (int i = 1; i<=n; i++){
		cin >> c[i];
		p[i] = fib(i);
	}
	for (int i = 3; i<=n; i++){
		if ((c[i-1]+c[i-2])>c[i]){
			if((c[i-2]+c[i-3])>=c[i-1]){
				CNT +=c[i];
				cout << c[i] << endl;
			}
			else{
				CNT+=(c[i-1]+c[i-2]);
				cout << (c[i-1]+c[i-2]) << endl;
			}
		}
	}
	cout << CNT;
	return 0;
}
