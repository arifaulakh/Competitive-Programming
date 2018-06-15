#include<bits/stdc++.h>
using namespace std;
const int MAXN = 51;
vector<int> f[MAXN];
bool visited[MAXN];
int dist[MAXN];
queue<int> q;

void BFS(int x){
    memset(visited,false,sizeof visited);
    memset(dist,0,sizeof dist);
	visited[x] = true;
	dist[x] = 0;
	q.push(x);
	while(!q.empty()){
		int s = q.front(); q.pop();
		for (auto u : f[s]){
			if (visited[u]) continue;
			visited[u] = true;
			dist[u] = dist[s]+1;
			q.push(u);
		}
	}
}

void init(){
	f[1] = {6};
	f[2] = {6};
	f[3] = {4, 5, 6,15};
	f[4] = {3,5,6};
	f[5] = {3,4,6};
	f[6] = {1,2,3,4,5,7};
	f[7] = {6,8};
	f[8] = {7,9};
	f[9] = {8,10,12};
	f[10] = {9,11};
	f[11] = {10,12};
	f[12] = {9,11,13};
	f[13] = {12,14,15};
	f[14] = {13};
	f[15] = {3, 13};
	f[16] = {17, 18};
	f[17] = {16, 18};
	f[18] = {16, 17};

}
int main(){
	freopen("data.txt","r",stdin);
	init();
	while(1){
		char c; scanf("%c",&c);
		if (c=='i'){
			int x, y; scanf("%d%d", &x, &y);
			bool flag = false;
			for (auto u : f[x]){
				if ((int)u==y){
					flag = true;
					break;
				}
			}
			if (flag){
				continue;

			}else{
		    	f[x].push_back(y);
			    f[y].push_back(x);
			}
		}
		if (c=='d'){
			int x, y;scanf("%d%d", &x, &y);
			f[x].erase(remove(f[x].begin(), f[x].end(), y), f[x].end());
			f[y].erase(remove(f[y].begin(), f[y].end(), x), f[y].end());
		}
		if (c=='n'){
			int x; scanf("%d", &x);
			printf("%d\n", (int)f[x].size());
		}
		if (c=='f'){
			int x; scanf("%d", &x);
			set<int, greater<int> > m;
			for (auto u : f[x]){
				for (auto i : f[u]){
					m.insert(i);
				}
			}
			m.erase(x);
			for (auto u : f[x]){
				m.erase(u);
			}
			printf("%d\n", (int) m.size());
		}
		if (c=='s'){
			int x, y; scanf("%d%d", &x, &y);
			BFS(x);
			if (visited[y]==false) printf("%s\n","Not connected");
			else{
				printf("%d\n", dist[y]);
			}
		}
		if (c=='q')break;
	}

	return 0;
}