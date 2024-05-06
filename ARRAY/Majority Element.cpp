#include <bits/stdc++.h>
using namespace std;

int majorityElementBF(vector<int> &arr)
{
    int n = arr.size();
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[j] == arr[i])
            {
                count++;
            }
            if (count > n / 2)
            {
                return arr[i];
            }
        }
    }
    return -1;
}

int majorityElementBatter(vector<int> &arr)
{
    int n = arr.size();
    int count;
    map<int, int> map;
    for (int i = 0; i < n; i++)
    {
        map[arr[i]]++;
    }
    for (auto it : map)
    {
        if (it.second > n / 2)
        {
            return it.first;
        }
    }
    return -1;
}

int majorityElementMoosAlgorithm(vector<int> &arr)
{
    int element;
    int count = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (count == 0)
        {
            count = 1;
            element = arr[i];
        }
        else if (arr[i] == element)
        {
            count++;
        }
        else
        {
            count--;
        }
    }
    int count2 = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == element)
        {
            count2++;
        }
        if (count2 > arr.size() / 2)
        {
            return element;
        }
    }
    return -1;
}

int int main()
{

    vector<int> arr = {3, 3, 3, 3, 1, 2, 2};

    int ans = majorityElement(arr); // 3   tc: O(n^2)  sc: O(n)

    int ans2 = majorityElement(arr); // 3   tc: O(n log n) + n  sc: O(n)

    int ans3 = majorityElementMoosAlgorithm(arr);

    cout << ans << endl;

    cout << ans2 << endl;

    cout << ans3 << endl;

    return 0;
}