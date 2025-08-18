#include <bits/stdc++.h>
using namespace std;

void selectionsort(int arr[],int n){
    int i,j;
    for(i = n-1;i > 0;i--){
       int max_idx = 0;
        for(j = 1;j <= i;j++){
            if(arr[j] > arr[max_idx]){
                max_idx = j;
            }
        }
        swap(arr[i],arr[max_idx]);
        cout << max_idx << " ";
    }
    cout << endl;
}
int main() {
    int t;
    cin >> t;
    while(t--){
    int n;
    cin >> n;
    int arr[n];
    
    for(int i = 0;i<n;i++){
        cin >> arr[i];
    }
    selectionsort(arr,n);
    }
    return 0;
}