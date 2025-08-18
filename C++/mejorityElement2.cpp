//Find mejority Element if it's confirm that it's exist!!!
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int MejorityElement(vector<int> &nums)
{
    int freq = 0, ans = 0, n = nums.size();
    for (int i = 0; i < n; i++)
    {
        if (freq == 0)
        {
            ans = nums[i];
        }
        if (ans == nums[i])
        {
            freq++;
        }
        else
        {
            freq--;
        }
    }
    return ans;
}

int main()
{
    vector<int> arr = {1, 2, 2, 1, 2, 3, 4, 5, 6, 3, 3, 3, 2, 2, 2, 2};
    int result = MejorityElement(arr);
    cout << "Mejority Element of array is :" << result;
    return 0;
}