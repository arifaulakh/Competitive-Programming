#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int n, q, episodes;

int main(){
	freopen("data.txt", "r", stdin);
	cin >> n >> q;
	vector<int> episodes;
	for (int i = 0; i<n; i++){
		int x; cin >> x;
		episodes.push_back(x);
	}
	vector<int> frequency_left, dpleft, frequency_right, dpright;
	dpleft[0] = episodes[0];
	dpright[-1] = episodes[-1];
	frequency_left[0] = frequency_right[-1] = 1;
	for (int i = 1; i<n; i++){
		if (episodes[i] > dpright[i-1]){
			dpleft[i] = episodes[i];
			frequency_left[i] = 1;
		}
		else if (episodes[i]==dpleft[i-1]){
			dpleft[i] = dpleft[i-1];
			frequency_left[i] = frequency_left[i-1]+1;
		}
		else{
			dpright[i] = dpright[i+1];
			frequency_right[i] = frequency_right[i+1];
		}
	}
	vector<int> dpl;
	vector<int> dpr;
	vector<int> freql;
	vector<int> freqr;
	for (int i = 0; i<n; i++){
		dpl.push_back(dpleft[i]);
		dpr.push_back(dpright[i]);
		freql.push_back(frequency_left[i]);
		freqr.push_back(frequency_right[i]);
	}
	dpl.push_back(0), dpr.push_back(0), freqr.push_back(0), freql.push_back(0);
	dpl.insert(dpl.begin(),0), dpr.insert(dpr.begin(),0), freqr.insert(freqr.begin(),0), freql.insert(freql.begin(),0);
	for (int i = 0; i < q; i++){
		int a, b; cin >> a >> b;
		int max1 = max(dpl[a-1], dpr[b-1]);
		int count;
		if (dpl[a-1] == dpr[b+1]){
			count = freql[a-1] + freqr[b+1];
		}
		else if(dpl[a-1] > dpr[b+1]){
			count = freql[a-1];
		}
		else{
			count = freqr[b+1];
		}
		cout << max1 << " " << count;
	}
	return 0;
}