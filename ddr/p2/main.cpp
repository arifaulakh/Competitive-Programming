#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("data.txt","r",stdin);
    string s; cin >> s;
    if (s[0]==s[2]) cout << "Neither" << endl;
    else if (s[0]!=s[2]){
        if (s[0]==s[1]||s[1]==s[2])cout << "Neither" << endl;
        else{
            if (s[0]=='U'||s[0]=='D'){
                if (s[0]=='U'){
                    if (s[2]=='D')cout << "Candle" << endl;
                }
                else if (s[0]=='D'){
                    if (s[2]=='U')cout << "Candle" << endl;
                }
                else cout << "Neither" << endl;
                
            }
            if (s[0]=='L'||s[0]=='R'){
                if (s[0]=='R'){
                    if (s[2]=='L')cout << "Crossover" << endl;
                }
                else if (s[0]=='L'){
                    if (s[2]=='R')cout << "Crossover" << endl;
                }
                else cout << "Neither" << endl;
                
            }
        }
    }
    return 0;
}