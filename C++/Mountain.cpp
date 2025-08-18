//852 leetcode
#include <iostream>
#include <vector>
using namespace std;

int PeakMountain(vector<int> arr, int key)
{
    int start, end, mid;
    start = 1;
    end = arr.size() - 2;
    while (start <= end)
    {
        mid = start + (end-start) / 2;
        if ( arr[mid-1] < arr[mid] && arr[mid] > arr[mid+1])
        {
            return mid;
        }
        if (arr[mid-1] < arr[mid]){
           start = mid + 1;
        }else{
            end = mid -1;
        }
    }
    return 0;
}
    int main()
    {
        vector<int> arr = {3,4,5,7,6,2,1};
        int key = 10;
        int result = PeakMountain(arr, key);
        if (result)
        {
            cout << "Peak index in Mountain Array " << result << endl;
        }
        else
        {
            cout << "element not found!" << endl;
        }
        return 0;
    }