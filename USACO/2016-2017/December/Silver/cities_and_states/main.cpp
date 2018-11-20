#include<bits/stdc++.h>
using namespace std;
const int MAXN = 2e5+5;
int N, cnt=0;
map<string, int> freq;

string reversed(string x){
    string final;
    final.push_back(x[2]), final.push_back(x[3]), final.push_back(x[0]), final.push_back(x[1]);
    return final;
}
int main(){
    ofstream fout("citystate.out");
    ifstream fin("citystate.in");
    //freopen("data.txt","r",stdin);
    fin >> N;
    for (int i = 1; i<=N; i++){
        string city, state; fin >> city >> state;
        string combined;
        combined.push_back(city[0]);
        combined.push_back(city[1]);
        if (combined!=state){
            combined+=state;
            freq[combined]++;
        }
        
    }
    for (auto x : freq){
        string str = x.first;
        string rev = reversed(str);
        cnt+=(freq[str]*freq[rev]);
    }
    fout << cnt/2 << endl;
    return 0;
}