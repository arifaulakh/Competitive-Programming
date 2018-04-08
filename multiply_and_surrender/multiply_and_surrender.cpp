#include<iostream>
#include<string>
#include <math.h>
using namespace std;

int N;

int main(){
	cin >> N;
	double total = 0;
	for (int i = 1; i<=N;i++){
		double x; cin >> x;
		total += log2(x);
	}
	cout<< int(total+1);
	return 0;
}
