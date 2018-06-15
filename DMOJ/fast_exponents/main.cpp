#include <iostream>

using namespace std;

int main() {
    int N; cin >> N;
    while(N--){
        unsigned long long int x; scanf("%lld", &x);
        if ((x&(x-1))==0) printf("T\n");
        else printf("F\n");
    }
    return 0;
}