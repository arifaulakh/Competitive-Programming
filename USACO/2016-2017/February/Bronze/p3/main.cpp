#include<bits/stdc++.h>
using namespace std;
const int MAXN = 2000010;
int N, START[MAXN], END[MAXN], endtime = -1, visited[MAXN];
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
	ifstream cin("cowqueue.in");
	ofstream cout("cowqueue.out");
	//freopen("data.txt","r",stdin);
	cin >> N;
	for (int i = 1; i<=N; i++){
		int s, e; cin >> s >> e;
		START[i] = s,  END[i]=e;
	}
	sort();
    for (int i = 1; i<=N; i++){
        int S = START[i], E = END[i];
        if (i==1){
            for (int j = S; j<=S+E; j++){
                visited[j]=1;
            }
        }
        else{
            if (visited[S]==0){
                for (int j = S; j<=S+E; j++){
                    visited[j] = 1; 
                }
            }
            else{
                int LV = -1;
                for (int j = 1; j<=MAXN; j++){
                    if (visited[j]==1)LV = j;
                }
                for (int j = LV; j<=LV+E; j++){
                    visited[j] = 1;
                }
            }
        }
    }
    int last = -1;
    for (int i = 1; i<=MAXN; i++){
        if (visited[i]==1)last = i;
    }
    cout << last << endl;
	return 0;
}