#include <iostream>
#include <vector>
using namespace std;
vector<int> pairSum(vector<int> nums, int target)
{
    vector<int> ans;
    int n = nums.size();
    int i = 0, j = n - 1;
    while (i < j)
    {
        int pairSum = nums[i] + nums[j];
        if (pairSum > target)
        {
            j--;
        }
        else if (pairSum < target)
        {
            i++;
        }else{
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }
}

int main()
{
    vector<int> arr = {2,7,11,14};
    int target = 9;
    vector <int> result = pairSum(arr,target);
    cout << "Pair for target sum :" << result[0]<<" "<< result[1];
    return 0;
}