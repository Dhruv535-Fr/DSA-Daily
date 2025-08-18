#include<iostream>
#include<vector>
using namespace std;

int binarySearch( vector <int> arr,int key){
    int start,end,mid;
    start = 0;
    end = arr.size()-1;
    while(start <= end){
        mid = (start + end)/2;
        if(arr[mid]<key){
            start = mid + 1;
        }
        else if(arr[mid]>key){
            end = mid-1;
        }
        else{
            return mid;
        }
    }
    return 0;
}
int main(){
    vector <int> arr = {10,20,30,45,67,89};
    int key = 45;
    int result = binarySearch(arr,key);
    if(result){
        cout << "Element found on "<< result << " index" << endl;
    }
    else{
        cout << "element not found!" << endl;
    }
    return 0;
}