#include<bits/stdc++.h>
using namespace std;
const int MAXN = 1e5+5;
string s;
int freq[MAXN], ps[MAXN], Q, a, b;
int main(){
    freopen("data.txt","r",stdin);
    cin >> s;
    for (int i = 0; i<(int)s.size(); i++){
        if (s[i]=='G')freq[i]++;
    }
    ps[0] = freq[0];
    for (int i = 1; i<(int)s.size(); i++){
        ps[i] = ps[i-1]+freq[i];
    }
    cin >> Q;
    while(Q--){
        cin >> a >> b;
        if (a<=b){
            if (a==0)cout << ps[b] << endl;
            else cout << ps[b]-ps[a-1] << endl;
        }
        else{
            if (b==0)cout << ps[a] << endl;
            else cout << ps[a]-ps[b-1] << endl;
        }
    }
    return 0;
}