#include<iostream>
#include<cmath>
using namespace std;

int size;
int cycle(int arr[]){
	int length = 0;
	int cmp[size-1];
	int sum = 1;
	while (sum!=0){
		length++;
		for (int i = 0; i<size-1; i++){
			cmp[i] = arr[i%length];
		}
		sum = 0;
		for (int i = 0; i<size-1; i++){
			sum+= abs(cmp[i]-arr[i]);
		}
	}
	return length;

}
int main(){
	freopen("data.txt", "r", stdin);
	cin >> size;
	while(size > 0){
		int diff[size-1];
		int prev; cin >> prev;
		int next = 0;
		for (int i = 0; i<size-1;i++){
		  cin >> next;
		  diff[i] = next - prev;
		  prev = next;
		}
		int len = 0;
		if ((size-1)>0) len = cycle(diff);
		cout << len << endl;
		cin >> size;

	}
	return 0;
}