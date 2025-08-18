// 33 leetCode
#include <iostream>
#include <vector>
using namespace std;

int binarySearchRotated(vector<int> arr, int key)
{
    int start, end, mid;
    start = 0;
    end = arr.size() - 1;
    while (start <= end)
    {
        mid = start + (end-start) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        if (arr[start] <= arr[mid]){
            if (arr[start] <= key && key <= arr[mid]){
                end = mid - 1;
            }else{
                start = mid + 1;
            }
        }else{
            if(arr[mid] <= key && key <= arr[end]){
                start = mid + 1;
            }else{
                end = mid -1;
            }
        }
    }
    return 0;
}
    int main()
    {
        vector<int> arr = {30, 45, 67, 89, 10, 20};
        int key = 10;
        int result = binarySearchRotated(arr, key);
        if (result)
        {
            cout << "Element found on " << result << " index" << endl;
        }
        else
        {
            cout << "element not found!" << endl;
        }
        return 0;
    }