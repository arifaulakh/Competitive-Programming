#include<iostream>
#include<cstring>
using namespace std;
const int MAXN = 10001;
int friends[MAXN], Distance[MAXN], x, y, n;
int main(){
	freopen("data.txt", "r", stdin);
	cin >> n;
	for (int i = 0; i<n; i++){
		int a, b; cin >> a >> b;
		friends[a] = b;
	}
	while(1){
		cin >> x >> y;
		if (x==0) break;
		bool check = true;
		memset(Distance, 0, sizeof Distance);
		int current = friends[x];
		Distance[friends[x]] = 1;
		while(true){
			if (current==x) break;
			if (Distance[friends[current]]>0){
				check = false;
				break;
			}
			Distance[friends[current]] = Distance[current]+1;
			current = friends[current];
		}
		if (Distance[y]==0) check = false;
		if (check){
			cout << "Yes " << Distance[y]-1 << endl;
		}
		else{
			cout << "No" << endl;
		}

	}
	return 0;
}

