#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

void bubbleSort(int nums[], int N){
    for (int i = 0; i < N; i++){
      cout << nums[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < N-1; i++){
        bool swapped = false;
        for (int j = 0; j < N-1; j++){
            if (nums[j] > nums[j+1]){
                int max = nums[j];
                int min = nums[j+1];
                nums[j+1] = max;
                nums[j] = min;
                swapped = true;
                for (int i = 0; i < N; i++){
                  cout << nums[i] << " ";
                }
                cout << endl;
            }
        }
        if (swapped == false){
            break;
        }
    }
}

int main(){
    int N; scanf("%d", &N);
    int nums[N];
    for (int i = 0; i < N; i++){
        scanf("%d", &nums[i]);
    }
    bubbleSort(nums, N);
    return 0;
}