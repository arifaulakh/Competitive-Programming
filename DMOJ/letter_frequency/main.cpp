#include<bits/stdc++.h>
using namespace std;
const int MAXN = 1e6+1;
int Q;
vector<int> freq[27];
string S;
char sentence[MAXN];
int main(){
	freopen("data.txt","r",stdin);
	getline(cin, S);
	for (int i = 0; i<(int)S.length(); i++){
		sentence[i] = S[i];
	}
	for (int i = 0; i<(int)S.length(); i++){
    if (sentence[i]!=' '){
      int position = sentence[i]-'a'+1;
      freq[position].push_back(i);
    }
	}
	cin >> Q;
	for (int i = 1; i<=Q; i++){
		int a, b; char let;
		cin >> a >> b >> let;
		int position = let - 'a'+1;
		auto l = lower_bound(freq[position].begin(), freq[position].end(), a-1);
		auto u = upper_bound(freq[position].begin(), freq[position].end(), b-1);
		cout << u - l << endl;
	}
	return 0;
}