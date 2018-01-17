#include <bits/stdc++.h>
using namespace std;

int N;

int a(int n){
	vector<int> v;
	for (int i = 2; i< sqrt(n)+2){
		while (n%i == 0){
			v.push_back(i);
			x /= i;
		}	
	}
	if (n!=1) v.push_back(n);
	reverse(v.begin(), v.end());
	return v;
}
int b(int v){
	int count = 0;
	while(v.length()>1){
		int x = v.pop();
		if (x == 2) count+=1;
		else count+=b(a(x-1))+x-1;
	}
	if(v[0] == 2) return count+1;
	else count+=b(a(v[0]-1)) + v[0]-1;
	return count;
}
int main(){
	cin >> n;
	if(N == 1) cout << 0 << endl;
	else cout << a(b(N));
	return 0;    
}