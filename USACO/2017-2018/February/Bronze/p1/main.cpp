#include <bits/stdc++.h>
using namespace std;
int a, b, x, y;
int main(){
    ofstream fout ("teleport.out");
    ifstream fin ("teleport.in");
    fin >> a >> b >> x >> y;
    int distance = abs(b-a);
    int teleportd = abs(min(x,y)-min(a,b)) + abs(max(x,y)-max(a,b));
    //cout << teleportd;
    int final = min(distance,teleportd);
    fout << final;
    return 0;
}