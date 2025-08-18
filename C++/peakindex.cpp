#include <bits/stdc++.h>
using namespace std;

int PeakIndex(vector <int> arr,int n){
    int start = 1,end = n-2,mid;

    while(start >= end){
        mid = start + (end - start)/2;
        if(arr[mid-1] < arr[mid] && arr[mid+1] < arr[mid]){
            return mid;
        }
        else if(arr[mid-1] < arr[mid]){
            start = mid +1;
        }
        else{
            end = mid -1;
        }
    }
    return mid;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n,peak;
    cin >> n;
    vector <int> seq(n);
    for(int i = 0;i<n;i++){
        cin >> seq[i];
    }
    peak = PeakIndex(seq,n);
    bool increseing,decresing;

    for(int i = 1;i < peak;i++){
        if(seq[i-1] < seq[i]){
            increseing = true;
        }
        else{
            increseing = false;
        }
    }
    for(int i = peak;i < n;i++){
        if(seq[i] < seq[i+1]){
            decresing = true;
        }
        else{
             decresing = false;
        }
    }
    
    cout << (increseing && decresing) <<endl;
    return 0;
}