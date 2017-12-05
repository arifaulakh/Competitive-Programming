#include <iostream>
#include <cstring>
#include <functional>
#include <queue>
const int MAXN = 1001;
using namespace std;
vector <int> adj[MAXN];

int main(){
    int N, M: scanf("%d%d", &N,&M);
    for (int i = 1; i <= M; i++){
        int a, b, w;
        scanf("%d%d%d", &a, &b, &c);
        adj[a].push_back(pair(w, a));
        adj[b].push_back(pair(w, b));
    }
    return 0;
}