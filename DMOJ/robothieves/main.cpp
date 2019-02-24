#include<bits/stdc++.h>
using namespace std;
#define mp make_pair
#define pb push_back
#define MOD 1000000007
#define MAXN 101
#define endl "\n"
#define readln(x) getline(cin, x);
typedef long long ll;
typedef long double ld;
typedef pair<int, int>pii;
typedef pair<ll, ll> pll;
typedef map<int, int> mii;
typedef map<ll, ll> mll;
ll fpow(ll x, ll n, ll mod){if (n==0) return 1%mod; ll u = fpow(x, n/2, mod); u = (u*u)%mod; if (n%2==1)u = (u*x)%mod;return u;}
ll gcd(ll a, ll b) { return b == 0 ? a : gcd(b, a % b); }
int N, M, dist[MAXN][MAXN], s_x = -1, s_y = -1;
char arr[MAXN][MAXN];
bool visited[MAXN][MAXN], camera[MAXN][MAXN];
queue<pii> q;
vector<int> x = {-1,1, 0, 0}, y = {0,0, -1, 1};

void seen(){
    for (int i = 1; i<=N; i++){
        for (int j = 1; j<=M; j++){
            if (arr[i][j]=='C'){
                //iterate up
                int X = i;
                while(arr[X][j]!='W'&&X>=1){
                    camera[X][j]=true;
                    X--;
                }
                //iterate down
                X = i;
                while(arr[X][j]!='W'&&X<=N){
                    camera[X][j]=true;
                    X++;
                }
                //iterate right
                int Y = j;
                while(arr[i][Y]!='W'&&Y<=M){
                    camera[i][Y]=true;
                    Y++;
                }
                //iterate left
                Y = j;
                while(arr[i][Y]!='W'&&Y>=1){
                    camera[i][Y]=true;
                    Y--;
                }

            }
        }
    }
}
void bfs(int a, int b){
    visited[a][b] = true;
    dist[a][b] = 0;
    q.push(mp(a,b));
    while (!q.empty()){
        pii s = q.front();q.pop();
        for (int i = 0; i<(int)x.size(); i++){
            int X = s.first+x[i], Y = s.second+y[i];
            if (X>=1&&X<=N&&Y>=1&&Y<=M){
                if (arr[X][Y]=='.'&&!camera[X][Y]){
                    if (visited[X][Y])continue;
                    visited[X][Y] = true;
                    dist[X][Y] = dist[s.first][s.second] + 1;
                    q.push(mp(X, Y));
                }
            }
        }
    }
}
int main(){
    //freopen("data.txt","r",stdin);
    cin >> N >> M;
    for (int i = 1; i<=N; i++){
        for (int j =1; j<=M; j++){
            cin >> arr[i][j];
            if(arr[i][j]=='S'){
                s_x = i, s_y = j;
            }
        }
    }
    seen();
    bfs(s_x, s_y);
    for (int i = 1; i<=N; i++){
        for (int j = 1; j<=M; j++){
            if (arr[i][j]=='.'){
                if (visited[i][j]&&!camera[i][j]){
                    cout << dist[i][j] << endl;
                }
                else cout << -1 << endl;
            }
        }
    }
    return 0;
}
