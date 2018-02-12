#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int N;
int boards[2001], fences[4001];
int main(){
	freopen("data.txt", "r", stdin);
	scanf("%d", &N);
	for (int i = 0; i<2001; i++){
		boards[i] = 0;
	}
	for (int i = 0; i<4001; i++){
		fences[i] = 0;
	}
	for (int i = 1; i<=N; i++){
		int height; scanf("%d", &height);
		boards[height]++;
	}
	for (int bottom =  1; bottom <= 2000; bottom++){
	  fences[2*bottom] += boards[bottom]/2;
	  for (int top = bottom+1; top<=2000;top++){
	    fences[bottom+top]+=min(boards[bottom], boards[top]);
	  }
	}
	int MAX = fences[0];
	int count = 1;
	for (int height = 1; height<=4000; height++){
	  if (fences[height] == MAX){
	    count++;
	  }else{
	    if(fences[height]> MAX){
	      MAX = fences[height];
	      count = 1;
	    }
	  }
	}
	cout << MAX << " " << count;
	return 0;
}