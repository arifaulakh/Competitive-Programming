#include<bits/stdc++.h>
using namespace std;
#define mp make_pair
#define pb push_back
#define MOD 1000000007
#define MAXN 21
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
int t, r, c, dist[MAXN][MAXN];
bool visited[MAXN][MAXN];
queue<pii>q;
char arr[MAXN][MAXN];
void BFS(int a, int b){
    memset(dist,0,sizeof dist);
    memset(visited, false,sizeof visited);
	visited[a][b] = true;
	dist[a][b] = 1;
	q.push(mp(a,b));
	while(!q.empty()){
		pii s = q.front(); q.pop();
        int east = s.second+1, west = s.second-1, north = s.first+1, south = s.first-1;
        if (arr[s.first][s.second]=='*'){
            continue;
        }
        if (arr[s.first][s.second]=='+'){
            //all directions
            //f (east>=1){
                if (visited[s.first][east])continue;
                visited[s.first][east] = true;
                dist[s.first][east] = dist[s.first][s.second]+1;
                q.push(mp(s.first, east));
            //}
            //if (west<=c){
                if (visited[s.first][west])continue;
                visited[s.first][west] = true;
                dist[s.first][west] = dist[s.first][s.second]+1;
                q.push(mp(s.first, west));
            //}
            //if (north>=1){
                if (visited[north][s.second])continue;
                visited[north][s.second] = true;
                dist[north][s.second] = dist[s.first][s.second]+1;
                q.push(mp(north, s.second));
            //}
            //if (south<=r){
                if (visited[south][s.second])continue;
                visited[south][s.second] = true;
                dist[south][s.second] = dist[s.first][s.second]+1;
                q.push(mp(south, s.second));
            //}
        }
        if (arr[s.first][s.second]=='-'){
            //east west
            //if (east>=1){
                if (visited[s.first][east])continue;
                visited[s.first][east] = true;
                dist[s.first][east] = dist[s.first][s.second]+1;
                q.push(mp(s.first, east));
            //}
            //if (west<=c){
                if (visited[s.first][west])continue;
                visited[s.first][west] = true;
                dist[s.first][west] = dist[s.first][s.second]+1;
                q.push(mp(s.first, west));
            //}
        }
        if (arr[s.first][s.second]=='|'){
            //north south
            //if (north>=1){
                if (visited[north][s.second])continue;
                visited[north][s.second] = true;
                dist[north][s.second] = dist[s.first][s.second]+1;
                q.push(mp(north, s.second));
            //}
            //if (south<=r){
                if (visited[south][s.second])continue;
                visited[south][s.second] = true;
                dist[south][s.second] = dist[s.first][s.second]+1;
                q.push(mp(south, s.second));
            //}
        }
	}
}

int main(){
    freopen("data.txt","r",stdin);
    cin >> t;
    while(t--){
        cin >> r >> c;
        for (int i = 1; i<=r; i++){
            for (int j = 1; j<=c; j++){
                cin >> arr[i][j];
            }
        }
        BFS(1,1);
        if (visited[r][c]&&arr[r][c]!='*')cout << dist[r][c] << endl;
        else cout << -1 << endl;
    }
    return 0;
}