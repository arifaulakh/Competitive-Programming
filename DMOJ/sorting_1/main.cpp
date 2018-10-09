#include <bits/stdc++.h>
using namespace std;
const int MAXN = 2e5+1;
int N, arr[MAXN], c[MAXN];
bool zero = false;
int main(){
    freopen("data.txt","r",stdin);
    cin >> N;
    for (int i = 1; i<=N; i++){
        cin >> arr[i];
        cin >> c[i];
        if (arr[i]==0) zero = true;
    }
    if (!zero){
        sort(c, c+N+1);
        for (int i = 1; i<=N; i++){
            if (arr[i]!=c[i]){
                cout << "NO" << endl;
                return 0;
            }
        }
    }
    else{
        vector<int> nums;
        for (int i = 1; i<=N; i++){
            if (arr[i]>0)nums.push_back(arr[i]);
        }
        for (int i = 0; i<(int)nums.size()-1; i++){
            if (nums[i]>nums[i+1]){
                cout << "NO" << endl;
                return 0;
            }
        }
        int finalZidx = -1, firstNidx = -1, firstZidx = -1;
        for (int i = 1; i<=N; i++){
            if (arr[i]>0){
                firstNidx = i;
                break;
            }
        }
        for (int i = 1; i<=N; i++){
            if (arr[i]==0)finalZidx = i;
        }
        for (int i = 1; i<=N; i++){
            if (arr[i]==0){
                firstZidx = i;
                break;
            }
        }
        if (finalZidx < firstNidx){
            for (int i = firstNidx; i<N; i++){
                if (arr[i]>arr[i+1]){
                    cout << "NO" << endl;
                    return 0;
                }
            }
        }
        int val = -1;
        for (int i = firstZidx; i<=N; i++){
            if (arr[i]>0){
                val = arr[i];
                break;
            }
        }
        for (int i = 1; i<=N; i++){
            if (arr[i]==0)arr[i] = val;
        }
        for (int i = 1; i<N; i++){
            if (arr[i]>arr[i+1]){
                for (int j = 0; j<(int)nums.size(); j++){
                    cout << nums[j] << " ";
                }
                cout << "NO" << endl;
                return 0;
            }
        }
        
    }
    cout << "YES" << endl;
	return 0;
}