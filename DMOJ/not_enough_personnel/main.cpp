#include<bits/stdc++.h>
using namespace std;
const int MAXN = 501;
int N, Q, s, d, vet[MAXN];
string names[MAXN];

int main(){
	freopen("data.txt","r",stdin);
	cin >> N; 
	for (int i = 1; i<=N; i++){
		cin >> names[i] >> vet[i];
	}
	cin >> Q;
	for (int e = 1;e<=Q; e++){
		cin >> s >> d;
		vector<int> val;
		for (int i = 1; i<=N; i++){
			if (vet[i]>=s&&vet[i]<=(s+d)){
				val.push_back(vet[i]);
			}
		}
		if ((int)val.size()==0) cout << "No suitable teacher!" << endl;
		else{
			sort(val.begin(), val.end());
			int MIN = val[0];
			for (int i = 1; i<=N; i++){
				if (vet[i]==MIN){
					cout << names[i] << endl;
					break;
				}
			}
		}
		


	}
}
