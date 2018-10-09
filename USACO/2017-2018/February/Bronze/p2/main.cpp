#include <bits/stdc++.h>
using namespace std;
int cows[101],N;
int main(){
	ofstream fout ("hoofball.out");
    ifstream fin ("hoofball.in");
    fin >> N;
    bool isone = true, isdiff = true;
    int count = 2;
    for (int i = 0; i<N; i++){
      fin >> cows[i];
    }
    sort(cows,cows+N);
   	for (int i = 1; i<N; i++){
   		if (cows[i]-cows[i-1]!=1) isone = false;
   	}
   	for (int i = 1; i<N-1;i++){
   		if (cows[i]-cows[i-1]>cows[i+1]-cows[i]) isdiff = false;
   	}
   	if (isone || isdiff){
   		fout << 1;
   	}
   	else{
   		for (int i = 2; i<N-2; i++){
   		  int a = cows[i]-cows[i-1];
   		  int b = cows[i-1]-cows[i-2];
   		  int c = cows[i+2]-cows[i+1];
   		  int d = cows[i+3]-cows[i+2];
   		  if (a>b&&c>d)count++;

   		}
   		fout << count;
   	}
    return 0;
}