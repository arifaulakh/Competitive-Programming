#include<iostream>
#include <vector>
using namespace std;
vector<int> edges[9999];
bool visited[9999];

int C, M, n, k;
void dfs(int start, int end) {
	int c = edges[start], count = 0;
	
}
int main(){
	int n; scanf("%d", &n);
	for (int i = 0; i<n; i++){
		int x, y; scanf("%d%d", &x, &y);
		edges[x].push_back(y);
	}
	while(1){
		int a, b; scanf("%d%d", &a, &b);
		if (a==0 &&b==0) break;
		int result = dfs(a, b);

	}
	return 0;
}

