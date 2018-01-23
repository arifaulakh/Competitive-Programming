#include<iostream>
#include<cmath>
using namespace std;

int main(){
	 //freopen("data.txt", "r", stdin);
	 int N; scanf("%d", &N);
	 int cost = 0;

	 while (N>1){
	 	int square = sqrt(N);
	 	int b = 2;
	 	while (N%b !=0 && b < square+1){
	 		b+=1;
	 	}
	 	if (b >= square+1){
	 		b = N;
	 	}
	 	int a = N/b;
	 	N-=a;
	 	cost+=b-1;
	 }
	 printf("%d\n", cost);
	 return 0;
}