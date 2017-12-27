#include<iostream>
#include<unordered_map>
#include<vector>
#include<algorithm>
using namespace std;

int Q, x;
char func;
typedef pair<int, int> p;

unordered_map<int, int> pos;
vector<p> v;

int main(){
	scanf("%d", &Q);
	int front = 0, end = 0;
	for (int i = 1; i<= Q; i++){
		cin >> func >> x;
		if (func == 'F'){
			pos[x] = front;
			front--;
		}
		else if (func == 'E'){
			pos[x] = end;
			end++;
		}
		else{
			pos.erase(x);
		}
	}
	for (auto a : pos){
		v.push_back(p(a.second, a.first));
	}
	sort(v.begin(), v.end());
	for (auto a : v){
		printf("%d\n", a.second);
	}
	return 0;
}