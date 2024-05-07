#include <bits/stdc++.h>
using namespace std;

int maxProfitBF(vector<int> arr)
{
    int maximumProfit = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i; j < arr.size(); j++)
        {
            if (arr[j] > arr[i])
            {
                maximumProfit = max(maximumProfit, arr[j] - arr[i]);
            }
        }
    }
    return maximumProfit;
}

int maxProfitOptimized(vector<int> arr)
{
    int miniSellingCost = arr[0];
    int maxProfit = 0;
    int profitPerTransaction = 0;
    for (int i = 1; i < arr.size(); i++)
    {
        profitPerTransaction = arr[i] - miniSellingCost;
        maxProfit = max(maxProfit, profitPerTransaction);
        miniSellingCost = min(miniSellingCost, arr[i]);
    }
    return maxProfit;
}

int main()
{

    vector<int> arr = {2, 5, 7, 1, 9, 8, 3};

    int ans1 = maxProfitBF(arr); // tc: O(n^2) sc: O(1)

    int ans2 = maxProfitOptimized(arr); // tc: O(n) and sc: O(1)

    cout << ans1 << endl;

    return 0;
}