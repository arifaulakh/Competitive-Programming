#include<iostream>
#include<vector>
using namespace std;

int n, x, y;
const int MAXN = 10009;
int ni[MAXN];
vector<int> edges[MAXN];

int main(){
	freopen("data.txt", "r", stdin);
	int n; cin >> n;
	while(1>0){
		cin >> x >> y;
		if (x == 0 && y == 0) break;
		edges[x].push_back(y);
	}
	ni[1] = 1;
	for (int i = 1; i<n; i++){
		for (int j= 0; j<edges[i].size();j++){
			ni[edges[i][j]]+=ni[i];
		}
	}
	cout << ni[n] << endl;
	return 0;
}
