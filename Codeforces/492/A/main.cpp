#include<bits/stdc++.h>
using namespace std;
int N, cnt = 0, rem;	
int main(){
	freopen("data.txt","r",stdin);
	cin >> N;
	while(N!=0){
		if (N>=100){
			cnt+=(int)(N/100);
			N=N%100;
		}
		else if (N>=20){
			cnt+=(int)(N/20);
			N=N%20;
		}
		else if (N>=10){
			cnt+=(int)(N/10);
			N=N%10;
		}
		else if (N>=5){
			cnt+=(int)(N/5);
			N=N%5;
		}
		else if (N>=1){
			cnt+=(int)(N/1);
			N=N%1;
		}
	}
	cout << cnt;
	return 0;
}