#include<bits/stdc++.h>
using namespace std;
const int MAXN = 1e5+1;
int n, k, freq[27], MIN = 1e6;
char word[MAXN];


int main(){
	freopen("data.txt","r",stdin);
	cin >> n >> k;
	for (int i = 1; i<=n; i++){
		cin >> word[i];
	}
	for (int i = 1; i<=n; i++){
		int position = word[i]-'A'+1;
		freq[position]++;
	}
	for (int i = 1; i<=k; i++){
		if (freq[i]==0){
			cout << 0 << endl;
			return 0;
		}
	}
	for (int i = 1; i<=k; i++){
		if (MIN>freq[i])MIN = freq[i];
	}
	cout << MIN*k << endl;
	return 0;
}
