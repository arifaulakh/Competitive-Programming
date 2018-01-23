#include<iostream>
#include<string>
using namespace std;
typedef string str;

str encode(str s, str key, int shift){
    str ans = "";
    shift %= key.size();
    char res[256]];
    for (char i = 0; i < 256; i++) res[i] = i;
    for (int i = key.size()-1; i >=0; i--){
        res[key.at(i)] = key.at((i+shift+key.size())%key.size());
    }
    for (int i = 0; i < s.length(); i++) ans+= res[s.at(i)];
    return ans;
}

int main(){
    str s, key; scanf("%s%s", &s, &key);
    int shift; scanf("%d", &shift);
    cout << encode(s,key, shift) << endl;
    return 0;
}