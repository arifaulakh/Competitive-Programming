#include<iostream>
using namespace std;

int N;

int main(){
	cin >> N;
	int array[7] = {0,1,1,1,1,1,1};
	for (int i = 1; i<N;i++){
	    int x; cin >> x;
	    array[x] *= (array[i]+1);
	}
	cout << array[N];
	return 0;
}