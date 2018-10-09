#include<bits/stdc++.h>
using namespace std;
const int MAXN = 31;
int N;
string A[MAXN], B[MAXN];
unordered_map<string, string>AtoB;
bool consistent = true;
int main(){
	freopen("data.txt","r",stdin);
	cin >> N;
	for (int i = 1; i<=N; i++){
		cin >> A[i];
	}
	for (int i = 1; i<=N; i++){
		cin >> B[i];
	}
	for (int i = 1; i<=N; i++){
		AtoB[A[i]]=B[i];
	}
	for (auto u : AtoB){
		string Aname = u.first, Bname = u.second;
		if (AtoB[Bname]!=Aname||AtoB[Bname]==Bname){
			consistent = false;
		}
	}
	if (consistent) cout << "good" << endl;
	else cout << "bad" << endl;

}