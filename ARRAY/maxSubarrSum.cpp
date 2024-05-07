#include <bits/stdc++.h>
using namespace std;

int maxSumArrSumBF(vector<int> &arr)
{
    int n = arr.size();
    int maxSum = -3423343;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int sum = 0;
            for (int k = i; k <= j; k++)
            {
                sum += arr[k];
                maxSum = max(maxSum, sum);
            }
        }
    }
    return maxSum;
}

/*
in batter solution we just need to add arr[j] in sum intend of count sum of all element via 3rd loop
*/

int maxSumArrSumBatter(vector<int> &arr)
{
    int n = arr.size();
    int maxSum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int sum = 0;
            sum += arr[j];
            maxSum = max(maxSum, sum);
        }
    }
    if (maxSum == 0)
        maxSum == 0;

    return maxSum;
}

int main()
{

    vector<int> arr = {-2, 1, -3, 4, -1, 2, 1, -5, 4};

    int ans1 = maxSumArrSumBF(arr); // ct: (n^3)

    int ans2 = maxSumArrSumBatter(arr); // ct: (n^2)

    // optimal is Kadane's algorithm

    cout << ans1 << endl;

    cout << ans2 << endl;

    return 0;
}