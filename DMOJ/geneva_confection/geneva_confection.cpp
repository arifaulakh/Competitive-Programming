#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int T, N;

int main(){
	scanf("%d", &T);
	while(T--){
		scanf("%d", &N);
		vector<int> flavours;
		vector<int> lake;
		vector<int> branch;
		for (int i = 0, x; i<N; i++){
			scanf("%d", &x);
			flavours.push_back(x);
		}
		for (int i = flavours.size()-1; i>=0; i--){
			if (flavours[i] > flavours[i-1]){
				branch.push_back(flavours[i]);
				lake.push_back(flavours[i-1]);
			}
			else{
				branch.push_back(flavours[i-1]);
				lake.push_back(flavours[i]);
			}
		}
		for (int i = 0; i<branch.size();i++){
			lake.push_back(branch[i]);
		}
		if (is_sorted(lake.begin(), lake.end())){
			cout<< "Y" << endl;
		}
		else{
			cout<< "N" << endl;
		}
	}
	return 0;
}