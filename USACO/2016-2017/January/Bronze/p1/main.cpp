#include<bits/stdc++.h>
using namespace std;
int N, val[8], MIN = 1e9, MIN2 = 1e9, idx, idx2;
unordered_map<string,int> cows;

void init(){
	cows["Bessie"] = 1;
    cows["Elsie"] = 2;
    cows["Daisy"] = 3;
    cows["Gertie"] = 4;
    cows["Annabelle"] = 5;
    cows["Maggie"] = 6;
    cows["Henrietta"] = 7;
}
int main(){
	ofstream fout("notlast.out");
    ifstream fin("notlast.in");
    init();
    //freopen("data.txt","r",stdin);
    fin >> N;
    for (int i = 1; i<=N; i++){
    	string name;
    	int value; 
    	fin >> name >> value;
    	val[cows[name]]+=value;
    }
    for (int i = 1; i<=7; i++){
    	if (val[i]<MIN){
    		MIN = val[i];
    	}
    }
    for (int i = 1; i<=7; i++){
    	if (MIN2>val[i]&&val[i]>MIN){
    		MIN2 = val[i];
    	}
    }
    //cout << MIN2 << endl;
    int cnt = 0, cntM = 0;
    for (int i = 1;  i<=7; i++){
    	if (val[i]==MIN2)cnt++;
    	if (val[i]==MIN)cntM++;
    }
    if (cnt>1 || cntM==7){
    	fout << "Tie" << endl;
    }
    else{
    	for (auto x : cows){
    		if (val[cows[x.first]]==MIN2){
    			fout << x.first << endl;
    		}
   		}
    }
    
    return 0;
}