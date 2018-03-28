#include <iostream>
#include <vector>
using namespace std;
const int MAXN = 2001;
vector<int> adj[MAXN];
bool visited[MAXN];

int N, M, A, B, X, Y;

void dfs(int s){
  if (visited[s]) return;
  visited[s] = true;
  for (auto u : adj[s]){
    dfs(u);
  }
}
int main(){
  cin >> N >> M >> A >> B;
  for (int i = 1; i<=M; i++){
    cin >> X >> Y;
    adj[X].push_back(Y);
    adj[Y].push_back(X);
  }
  dfs(A);
  if (visited[B]) cout << "GO SHAHIR!";
  else cout << "NO SHAHIR!";
  return 0;
}