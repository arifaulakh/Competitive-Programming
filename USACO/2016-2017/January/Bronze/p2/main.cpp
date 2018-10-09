#include<bits/stdc++.h>
using namespace std;
const int MAXN = 101;
int N, v1[MAXN], v2[MAXN];
vector<int> values;

int case1(){
	//H = 1, S = 2, P = 3
	int W = 0;
	for (int i = 1; i<=N; i++){
		if (v1[i]!=v2[i]){
			if ((v1[i]==1&&v2[i]==2)||(v1[i]==2&&v2[i]==3)||(v1[i]==3&&v2[i]==1))W++;
		}
	}
	return W;
}
int case2(){
	//H = 1, S = 3, P = 2
	int W = 0;
	for (int i = 1; i<=N; i++){
		if (v1[i]!=v2[i]){
			if ((v1[i]==1&&v2[i]==3)||(v1[i]==3&&v2[i]==2)||(v1[i]==2&&v2[i]==1))W++;
		}
	}
	return W;
}
int case3(){
	//H = 2, S = 1, P = 3
	int W = 0;
	for (int i = 1; i<=N; i++){
		if (v1[i]!=v2[i]){
			if ((v1[i]==2&&v2[i]==1)||(v1[i]==1&&v2[i]==3)||(v1[i]==3&&v2[i]==2))W++;
		}
	}
	return W;
}
int case4(){
	//H = 2, S = 3, P = 1
	int W = 0;
	for (int i = 1; i<=N; i++){
		if (v1[i]!=v2[i]){
			if ((v1[i]==2&&v2[i]==3)||(v1[i]==3&&v2[i]==1)||(v1[i]==1&&v2[i]==2))W++;
		}
	}
	return W;
}
int case5(){
	//H = 3, S = 1, P = 2
	int W = 0;
	for (int i = 1; i<=N; i++){
		if (v1[i]!=v2[i]){
			if ((v1[i]==3&&v2[i]==1)||(v1[i]==1&&v2[i]==2)||(v1[i]==2&&v2[i]==3))W++;
		}
	}
	return W;
}
int case6(){
	//H = 3, S = 2, P = 1
	int W = 0;
	for (int i = 1; i<=N; i++){
		if (v1[i]!=v2[i]){
			if ((v1[i]==3&&v2[i]==2)||(v1[i]==2&&v2[i]==1)||(v1[i]==1&&v2[i]==3))W++;
		}
	}
	return W;
}

int main(){
	ofstream fout("hps.out");
	ifstream fin("hps.in");
	freopen("data.txt","r",stdin);
	fin >> N;
	for (int i = 1; i<=N; i++){
		fin >> v1[i] >> v2[i];
	}
	int a = case1(), b = case2(), c = case3(), d = case4(), e = case5(), f = case6();
	values.push_back(a), values.push_back(b), values.push_back(c), values.push_back(d), values.push_back(e), values.push_back(f);
	int MAX = 0;
	for (int u : values){
		if (MAX < u) MAX = u;
	}
	fout << MAX << endl;
	return 0;
}