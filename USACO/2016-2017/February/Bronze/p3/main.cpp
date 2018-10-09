#include<bits/stdc++.h>
using namespace std;
const int MAXN = 101;
int N, START[MAXN], END[MAXN], endtime = -1;

void sort(){
	for (int i = 1; i < N; i++){
        bool swapped = false;
        for (int j = 1; j < N; j++){
            if (START[j] > START[j+1]){
                int max = START[j];
                int min = START[j+1];
                START[j+1] = max;
                START[j] = min;
                swapped = true;
                int MAX = END[j];
                int MIN = END[j+1];
                END[j+1] = MAX;
                END[j] = MIN;
            }
        }
        if (swapped == false){
            break;
        }
    }
}
int main(){
	// ifstream fin("cowqueue.in");
	// ofstream fout("cowqueue.out");
	freopen("data.txt","r",stdin);
	cin >> N;
	for (int i = 1; i<=N; i++){
		int s, e; cin >> s >> e;
		START[i] = s,  END[i]=s+e;
	}
	sort();
    for (int i = 1; i<N; i++){
        if (START[i+1]<END[i]){
            endtime = END[i]+(START[i+1]-START[i]);
        }
        else{
            endtime = END[i];
        }
    }
	cout << endtime << endl;
	return 0;
}