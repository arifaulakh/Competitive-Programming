#include<bits/stdc++.h>
using namespace std;
string s, alpha = "aABCDEFGHIJKLMNOPQRSTUVWXYZ";
int cnt = 0;

int main(){
	ifstream fin("circlecross.in");
	ofstream fout("circlecross.out");
	//freopen("data.txt","r",stdin);
	fin >> s;
	for (int i = 1; i<=25; i++){
		for (int j = i+1; j<=26; j++){
			char first = alpha[i], second = alpha[j];
			vector<char> order;
			for (int l = 0; l<52; l++){
				if (s[l]==first || s[l]==second) order.push_back((char)s[l]);
			}
			if (order[0]==order[2]){
				cnt++;
			}

		}
	}
	fout << cnt << endl;
}