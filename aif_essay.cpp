#include<iostream>
#include<cstring>
using namespace std;

int N;
int main(){
	scanf("%d", &N);
	for (int i = 1, x; i<=N; i++){
		scanf("%d", &x);
		string final = ""
		for (int j = 1; j<= x; j++){
			String s; scanf("%s", &s);
			if (isupper(s)){
				s = "!!!" + s[0:s.length()-1] + "!!!";
			}
			else if (s[s.length()-1] == "."){
				s = s[0:s.length()-1] + "!!!"
			}
			final += s + " ";
		}
		printf("%s\n", final);
	}
	return 0;
}