/*
ID: arifaulakh
LANG: C++
PROG: ride
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    ofstream fout ("ride.out");
    ifstream fin ("ride.in");

    string comet, group; fin >> comet >> group;
    int ccount = 1;
    int gcount = 1;
    for (int i = 0; i < comet.length(); i++ ){
        char x = comet[i];
        int result = x;
        ccount*=(result-64);
    }
    for (int i = 0; i < group.length(); i++ ){
        char x = group[i];
        int result = x;
        gcount*=(result-64);
    }
    if (ccount%47 == gcount%47) fout << "GO" << endl;
    else fout << "STAY" << endl;
    return 0;
}