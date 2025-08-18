#include <iostream>
#include <vector>
using namespace std;

vector<int> productExceptSelf(vector<int> &nums)
{
    int n = nums.size();
    vector<int> ans(n, 1);  // Initialize answer array with 1

    // Prefix product loop
    for (int i = 1; i < n; i++)  // Start from 1 since ans[0] is already 1
    {
        ans[i] = ans[i - 1] * nums[i - 1];
    }

    int suffix = 1;  // Initialize suffix product as 1

    // Suffix product loop
    for (int i = n - 1; i >= 0; i--)
    {
        ans[i] *= suffix;  // Multiply with the suffix product
        suffix *= nums[i];  // Update the suffix product
    }

    return ans;
}

int main()
{
    vector<int> vec = {1, 2, 3, 4};  // Input vector
    vector<int> ans = productExceptSelf(vec);  // Get the result

    // Print the result
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}
