#include<iostream>
#include<set>
using namespace std;

int G, P;

int main(){
	int p;
	cin >> G >> P;
	set <int> g;
	for (int i = 1; i <= G; i++){
		g.insert(i*-1);
	}
	for (int i = 0; i<P; i++){
		cin >> p;
		if(gates.lower_bound(plane*-1) == gates.end()){
			cout << i << endl;
			return 0;
		}
		gates.erase(gates.lower_bound(plane*-1));
	}
	cout << P << endl;
	return 0;
}