#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxProfit(vector<int> &prices)
{
    int n = prices.size();
    int maxProfit = 0, Bestbuy = prices[0];
    for (int i = 1; i < n; i++)
    {
        if (prices[i] > Bestbuy)
        {
            maxProfit = max(maxProfit, (prices[i] - Bestbuy));
        }
        Bestbuy = min(Bestbuy, prices[i]);
    }
    return maxProfit;
}
int main()
{
    vector<int> arr = {7, 1, 3, 5, 6, 4};
    int result = maxProfit(arr);
    cout << "Maximam Profit gain :" << result;
    return 0;
}