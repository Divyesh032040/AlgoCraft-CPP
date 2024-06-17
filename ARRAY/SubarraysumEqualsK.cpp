#include <bits/stdc++.h>
using namespace std;

int SubarraySumEqualsKBF(vector<int> arr, int k)
{
    int n = arr.size();
    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int sum = 0;
            for (int l = i; l <= j; l++)
            {
                sum += arr[l];
                if (sum == k)
                {
                    ans++;
                }
            }
        }
    }
    return ans;
}

int SubarraySumEqualsKBatter(vector<int> arr, int k)
{
    int n = arr.size();
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum = sum + arr[j];
            if (sum == k)
            {
                ans++;
            }
        }
    }
    return ans;
}

// optimal approach
int SubarraySumEqualsToKOptimal(vector<int> arr, int k)
{
    int n = arr.size();
    unordered_map<int, int> map;
    map[0] = 1;
    int cnt = 0;
    int preSum = 0;
    for (int i = 0; i < n; i++)
    {
        preSum = preSum + arr[i];
        int remove = preSum - k;
        cnt = cnt + map[remove];
        map[preSum] = map[preSum] + 1;
    }
    return cnt;
}

int main()
{

    vector<int> arr = {5, 1, 4, 3, 2, 1, 4, 3, 2};
    int k = 5;
    int myAns = SubarraySumEqualsKBatter(arr, k);
    cout << myAns << endl;

    return 0;
}

/*
brute force : O(n^3)
batter : O(n^2)
optimal : O(n)
 */