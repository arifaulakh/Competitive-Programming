/*
ID: aular1
LANG: C++11
PROG: gift1
*/
#include <bits/stdc++.h>
using namespace std;
const int MAXN = 20;
int N;
map<string, int> friends;
string order[MAXN];
int main(){
    ofstream fout ("gift1.out");
    ifstream fin ("gift1.in");
    //freopen("data.txt","r",stdin);
    fin >> N;
    for (int i = 1; i<=N; i++){
    	string name; fin >> name;
    	friends[name] = 0;
    	order[i] = name;
    }
    for (int e = 1; e<=N; e++){
    	string name; fin >> name;
    	int money, numfriends; fin >> money >> numfriends;
    	if (numfriends==0){
    		friends[name]+=money;
    	}
    	else{
    		if (money>0){
    			friends[name] -=money;
				int gift = money/numfriends;
    			for (int i = 1; i<=numfriends; i++){
    				string f; fin >> f;
    				friends[f]+=gift;
    			}
    			friends[name]+=(money%numfriends);
    		}
    		else{
    			for (int i = 1; i<=numfriends; i++){
    				string f; fin >> f;
    				friends[f]+=0;
    			}
    		}
    	}
    }
    for (int i = 1; i<=N; i++){
    	fout << order[i] << " " << friends[order[i]] << endl;
    }
    return 0;
}