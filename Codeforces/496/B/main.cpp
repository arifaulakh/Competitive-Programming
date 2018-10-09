#include<bits/stdc++.h>
using namespace std;
int cnt = 0;
int main(){
	freopen("data.txt","r",stdin);
	string s, t; cin >> s >> t;
	int sl = (int)s.length(), tl = (int)t.length();

	if (sl>=tl){
		for (int i = sl-1; i>=0; i--){
			int j = i-(sl-tl);
			if (s[i]!=t[j]){
				cnt+=(i+1);
				cnt+=(j+1);
				break;
			}
		}
	}
	else{
		for (int i = tl-1; i>=0; i--){
			int j = i-(tl-sl);
			if (t[i]!=s[j]){
				cnt+=(i+1);
				cnt+=(j+1);
				break;
			}
		}
	}
	cout << cnt << endl;
	return 0;
}