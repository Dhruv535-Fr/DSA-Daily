#include<iostream>
using namespace std;

void bubblesort(int arr[],int n){
    int count = 0;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n-i-1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
                count++;
            }
        }
        
    }
    cout << count << endl;
    
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++){
            cin >> arr[i];
        }
        bubblesort(arr,n);
        for (int i = 0; i < n; i++){
            cout<< arr[i] << " ";
        }
        
    }
    return 0;
}