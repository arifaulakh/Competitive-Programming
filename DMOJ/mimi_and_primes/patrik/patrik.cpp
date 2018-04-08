#include<stack>
#include<iostream>
using namespace std;
typedef long long ll;
typedef pair<int,int> ii;

int main(){
	int N; cin >> N;
	ll cnt = 0;
	stack<ii>s;
	for (int i = 1, x; i<=N; i++){
		cin >> x;
		int equal = 1;
		while(!s.empty()&&s.top().first<=x){
			cnt+=1LL*s.top().second;
			if (s.top().first == x) equal+= s.top().second;
			s.pop();
		}
		if(!s.empty()) cnt++;
		s.push(ii(x,equal));
	}
	cout << cnt<< endl;
	return 0;
}