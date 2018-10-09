#include<iostream>
#include<string>
using namespace std;
const int MAXN = 1001;

int N;
string mothers[MAXN], daughters[MAXN];

int main(){
	freopen("data.txt", "r", stdin);
	cin >> N;
	for (int i = 1; i<=N; i++){
		string m, d; cin >> m >> d;
		mothers[i] = m;
		daughters[i] = d;
	}
	for (int i = 1; i<=10; i++){
		string name; cin >> name;
		string mother;
		int siblings = 0, cousins = 0;
		for (int j = 1; j<=N; j++){
		  if (name==daughters[j]){
		  	mother = mothers[j];
		  	break;
		  }
		}
		for (int j = 1; j<=N; j++){
			if (mother == mothers[j]&&name!=daughters[j]){
				siblings++;
			}
		}
		string grandmother;
		for (int j = 1; j<=N; j++){
			if (mother == daughters[j]){
				grandmother = mothers[j];
				break;
			}
		}
		//cout << grandmother << endl;
		for (int j = 1; j<=N; j++){
			if (grandmother==mothers[j]&&mother!=daughters[j]){
				string momsibling = daughters[j];
				//cout << momsibling << endl;
				for (int k = 1; k<=N; k++){
					if (momsibling==mothers[k])cousins++;
				}
			}
		}
		cout << "Cousins: " << cousins << ", " << "Sisters: "<< siblings << endl;
	}
	return 0;
}