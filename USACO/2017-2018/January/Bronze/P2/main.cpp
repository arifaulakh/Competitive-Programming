#include<iostream>
#include<algorithm>
#include<fstream>
using namespace std;

int N, times[101], start[101], finish[101];
int main(){
    ofstream fout("lifeguards.out");
    ifstream fin("lifeguards.in");
    fin >> N;
    for (int i = 1; i<=N; i++){
        int x, y; fin >> x >> y;
        start[i] = x;
        finish[i] = y;
    }
    int x = N+1;
    sort(start, start+x);
    sort(finish, finish+x);
    for (int i = 1; i<=N; i++){
        int temp[N+1], temp2[N+1];
        for (int k = 1; k<=N;k++){
          temp[k] = start[k];
          temp2[k] = finish[k];
        }
        temp[i] = 0, temp2[i] = 0;
        int count = 0;
        for (int j = 1; j<=N; j++){
            int diff = temp2[j]-temp[j];
            if (temp[j]==0) count+=0;
            if (j==N) count+=diff;
            if (temp[j+1]==0&&j!=N){
                if(temp2[j]<start[j+2]) count+=diff;
                else if(temp2[j]>temp[j+2]) count+=(diff-(temp2[j]-temp[j+2]));
            }
            else if (temp[j+1]!=0 && temp[j]!=0 && j!=N){
                //cout << temp[j] << endl;
                if(temp2[j]<temp[j+1]) count+=diff;
                else if(temp2[j]>temp[j+1]) count+=(diff-(temp2[j]-temp[j+1]));
            }

        }
        //cout << count << endl;
        times[i] = count;
    }
    int MAX = 0;
    for (int i=1; i<=N; i++){
        if(times[i]>MAX) MAX = times[i];
    }
    fout << MAX;
    return 0;
}