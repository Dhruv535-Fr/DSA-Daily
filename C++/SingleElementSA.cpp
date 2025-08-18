//540 LeetCode
#include <iostream>
#include <vector>
using namespace std;

int SingleElement(vector<int> arr, int key)
{
    int start, end, mid,n;
    start = 0;
    n = arr.size();
    end = n - 1;
    if(n == 1)return arr[0];
    while (start <= end)
    {
        if(mid == 0 && arr[0] != arr[1]) return arr[mid];
        if(mid == n-1 && arr[n-1] != arr[n-2]) return arr[mid];
        
        mid = start + (end-start) / 2;
        if (arr[mid-1] != arr[mid] && arr[mid] != arr[mid+1])
        {
            return arr[mid];
        }
        if (mid % 2 == 0){
            if(arr[mid-1]==arr[mid]){
                end = mid -1;
            }else{
                start = mid + 1;
            }
        }else{
           if(arr[mid-1]==arr[mid]){
                start = mid +1;
            }else{
                end = mid - 1;
            }
        }
    }
    return -1;
}
int main(){
    vector<int> arr = {1,1,3,3,4,4,5,6,5};
    int key = 10;
    int result = SingleElement(arr, key);
    cout << "Single Element is " << result << " index" << endl;
    return 0;     
}