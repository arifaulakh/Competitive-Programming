#include<iostream>
#include<vector>
using namespace std;
vector<pair<int,int> > edges;
vector<int> v;
struct UnionFind {
    vector<int> p, rank;
    UnionFind(int N){
        rank.assign(N,0);
        p.assign(N,0);
        for (int i = 0; i<N; i++) p[i] = i;
    }
    int findSet(int i) {
        return (p[i] == i) ? i : (p[i]=findSet(p[i]));
    }
    void unionSet(int i, int j){
        if(findSet(i)!= findSet(j)){
            int x = findSet(i), y = findSet(j);
            if (rank[x] > rank[y]) p[y] = x;
            else{
                p[x] = y;
                if (rank[x]==rank[y]){
                    rank[y]++;
                }
            }
        }
    }
};
int main(){
    freopen("data.txt", "r", stdin);
    int N, M; scanf("%d%d", &N, &M);
    for (int i = 0; i<N; i++){
        int x, y; scanf("%d%d", &x, &y);
        edges.push_back(make_pair(x,y));
    }
    int treesize = 0;
    UnionFind x(N+1);
    int id = 0;
    for (int i = 0; i < edges.size(); i++){
    	pair<int, int> edge = edges[i];
        id++;
        if (x.findSet(edge.first) != x.findSet(edge.second)){
            x.unionSet(edge.first, edge.second);
            treesize++;
            v.push_back(id);
        }

    }
    if (treesize < N-1) printf("%s\n", "Disconnected Graph");
    else{
        for (int i = 0; i < v.size(); i++){
            printf("%d\n", v[i]);
        }
    }
    return 0;
    
}