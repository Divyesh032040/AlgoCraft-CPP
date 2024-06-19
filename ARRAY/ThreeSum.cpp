#include <bits/stdc++.h>
using namespace std;

// brute force
vector<vector<int>> threeSumBrute(vector<int> arr, int n)
{
    // set data structure to store all unique list
    set<vector<int>> set;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; j < n; j++)
            {
                if (arr[i] + arr[j] + arr[k] == 0)
                {
                    vector<int> temp = {arr[i], arr[j], arr[k]};
                    sort(temp.begin(), temp.end());
                    set.insert(temp);
                }
            }
        }
    }
    vector<vector<int>> ans(set.begin(), set.end());
    return ans;
}

// batter
vector<vector<int>> threeSumBatter(vector<int> arr, int n)
{

    set<vector<int>> ls;

    for (int i = 0; i < n; i++)
    {
        set<int> hashSet;
        for (int j = i + 1; j < n; j++)
        {
            int thirdElem = -(arr[i] + arr[j]);
            if (hashSet.find(thirdElem) != hashSet.end())
            {
                vector<int> temp = {arr[i], arr[j], thirdElem};
                sort(temp.begin(), temp.end());
                ls.insert(temp);
            }
            hashSet.insert(arr[j]);
        }
    }
    vector<vector<int>> ans(ls.begin(), ls.end());
    return ans;
}

// optimal
vector<vector<int>> threeSumOptimal(vector<int> arr, int n)
{

    vector<vector<int>> ans;
    sort(arr.begin(), arr.end());
    for (int i = 0; i < n; i++)
    {
        if (i > 0 && arr[i] == arr[i - 1])
            continue;
        int j = i + 1;
        int k = n - 1;
        while (j < k)
        {
            int sum = arr[i] + arr[j] + arr[k];
            if (sum < 0)
            {
                j++;
            }
            else if (sum > 0)
            {
                k--;
            }
            else
            {
                vector<int> temp = {arr[i], arr[j], arr[k]};
                ans.push_back(temp);
                j++;
                k--;
                while (j < k && arr[j] == arr[j - 1])
                    j++;
                while (j < k && arr[k] == arr[k - 1])
                    k--;
            }
        }
    }
    return ans;
}

int main()
{

    vector<int> arr = {-1, 0, 1, 2, -1, 2, -2, 0};

    int n = arr.size();

    vector<vector<int>> ans = threeSumOptimal(arr, n);

    for (auto it : ans)
    {
        for (auto i : it)
        {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}

/*
brute force : tc : O(n^3 * log(number of three element))
              sc : 2*O(number of three element)



 */