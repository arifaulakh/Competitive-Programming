#include<bits/stdc++.h>
using namespace std;
const int MAXN = 201;
int N, x[MAXN], y[MAXN], p[MAXN], dist[MAXN];
bool transmit[MAXN][MAXN], visited[MAXN];
vector<int> adj[MAXN];
queue<int> q;
int BFS(int x)
{
    int cnt = 0;
    memset(visited,false,sizeof visited);
    memset(dist,0,sizeof dist);
    visited[x] = true;
    dist[x] = 0;
    q.push(x);
    while (!q.empty())
    {
        int s = q.front();
        q.pop();
        cnt++;
        for (auto u : adj[s])
        {
            if (visited[u])
                continue;
            visited[u] = true;
            dist[u] = dist[s] + 1;
            q.push(u);
        }
    }
    return cnt;
}
int main(){
    ofstream fout ("moocast.out");
    ifstream fin ("moocast.in");
    //freopen("data.txt","r",stdin);
    fin >> N;
    for (int i = 1; i<=N; i++){
        fin >> x[i] >> y[i] >> p[i];    
    }
    for (int i = 1; i<=N; i++){
        for (int j = 1; j<=N; j++){
            int d = (x[j]-x[i])*(x[j]-x[i])+(y[j]-y[i])*(y[j]-y[i]);
            if (p[i]*p[i]>=d){
                transmit[i][j] = true;
            }
        }
    }
    for (int i = 1; i<=N; i++){
        for (int j = 1; j<=N; j++){
            if (transmit[i][j]){
                adj[i].push_back(j);
            }
        }
    }
    int MAX = -1;
    for (int i = 1; i<=N; i++){
        MAX = max(MAX,BFS(i));
    }
    fout << MAX << endl;
    return 0;
}