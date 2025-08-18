#include <iostream>
#include <vector>
using namespace std;
vector<int> productExceptSelf(vector<int> &nums)
{
  int n = nums.size();
  vector<int> ans(n, 1);

  for (int i = 1; i < n; i++)
  {
    ans[i] = ans[i - 1] * nums[i - 1];
  }
  int suffix = 1;
  for (int i = n - 2; i >= 0; i--)
  {
    suffix *= nums[i + 1];
    ans[i] *= suffix;
  }
  return ans;
}
int main()
{
  int n;
  vector<int> vec = {1, 2, 3, 4};
  vector <int> ans = productExceptSelf(vec);
  for (int i = 0;i<ans.size();i++)
  {
    cout << ans[i] << " ";
  }
  return 0;
}