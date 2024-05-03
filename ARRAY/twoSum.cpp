#include <bits/stdc++.h>
using namespace std;

// variant 1 : return yes if sum is available
string twoSumBruteForce(int n, vector<int> arr, int target)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                return "yes";
                break;
            }
        }
    }
    return "no";
}

// variant 2  : return index of both elem tc : O(n) sc:O(n)
vector<int> twoSumBatter(vector<int> &nums, int target)
{
    int n = nums.size();
    map<int, int> map;
    for (int i = 0; i < n; i++)
    {
        int more = target - nums[i];
        if (map.find(more) != map.end())
        {
            return {map[more], i};
        }
        map[nums[i]] = i;
    }
    return {}; // return empty vector
}

// without using map data structure
string twoSumWithTwoPointer(int n, vector<int> arr, int target)
{
    int left = 0;
    int right = n - 1;
    sort(arr.begin(), arr.end());
    while (left < right)
    {
        int sum = arr[right] + arr[left];
        if (sum == target)
        {
            return "yes";
        }
        else if (sum > target)
            right--;
        else
            left++;
    }
    return "No";
}
int main()
{
    int n = 5;
    vector<int> arr = {2, 6, 5, 8, 11};
    int target = 14;
    string ans = twoSum(n, arr, target); // o(n^2)

    string ans2 = twoSumWithTwoPointer(n, arr, target);
    cout << "This is the answer for variant 1: " << ans << endl;
    cout << "This is the answer for variant 1: " << ans2 << endl;
    return 0;
}