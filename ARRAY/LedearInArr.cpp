#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> leaderInArrBrute(int arr[], int n)
{
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        bool leader = true;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] > arr[i])
            {
                leader = false;
                break;
            }
        }
        if (leader == true)
        {
            ans.push_back(arr[i]);
        }
    }
    return ans;
}

vector<int> leaderInArrOptimal(int arr[], int n)
{
    vector<int> ans;
    int maxi = arr[n - 1];
    ans.push_back(arr[n - 1]);
    for (int i = n - 2; i >= 0; i--)
    {
        if (arr[i] > maxi)
        {
            ans.push_back(arr[i]);
            maxi = max(maxi, arr[i]);
        }
    }
    sort(ans.begin(), ans.end());
    return ans;
}

int main()
{
    int n = 6;
    int arr[n] = {10, 22, 12, 3, 0, 6};

    vector<int> ans = leaderInArrBrute(arr, n); // 22 12 6 O(n^2)

    vector<int> ans2 = leaderInArrOptimal(arr, n); // O(n log n)

    for (int i = 0; i < ans.size(); i++)
    {

        cout << ans2[i] << " ";
    }

    cout << endl;

    return 0;
}