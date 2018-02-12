#include<iostream>
using namespace std;

int N, K, Q;

int main(){
	freopen("data.txt", "r", stdin);
	scanf("%d%d%d", &N, &K, &Q);
	int sequence[N+1], prefix[N+1];
	for (int i = 1; i<=N; i++){
		scanf("%d", &sequence[i]);
	}
	prefix[1] = sequence[1];
	for (int i = 2; i<=N; i++){
		prefix[i] = prefix[i-1]+sequence[i];
	}
	// for (int i = 1; i<=N; i++){
	// 	printf("%d\n", prefix[i]);
	// }
	while(Q--){
		int a, b, x, y; scanf("%d%d%d%d", &a, &b, &x, &y);
		bool inSequence = false, inSequence2 = false;
		if ((prefix[y]-prefix[x]) > K){
			int k = lower_bound(sequence, sequence+N, a)-sequence;
			if (k<=y && k>=x && sequence[k] == a)inSequence = true;
			int j = lower_bound(sequence, sequence+N, b)-sequence;
			if (j<=y && j>=x && sequence[j] == b)inSequence2 = true;
			if (inSequence&&inSequence2) printf("Yes\n");
			else printf("No\n");
			//cout << k << " " << j << endl;

		}
		else{
			printf("No\n");
		}
	}
	return 0;
}