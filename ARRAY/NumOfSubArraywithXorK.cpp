#include <bits/stdc++.h>
using namespace std;

// batter
int subArrWithXorOfK(vector<int> arr, int k)
{
    int n = arr.size();
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int preXor = 0;
        for (int j = i; j < n; j++)
        {
            preXor = preXor ^ arr[j];
            if (preXor == k)
            {
                ans += 1;
            }
        }
    }
    return ans;
}

// optimized
int subArrWithXorK(vector<int> arr, int k)
{
    int n = arr.size();
    unordered_map<int, int> map;
    int preXor = 0;
    int ans = 0;
    map[0]++;
    for (int i = 0; i < n; i++)
    {
        preXor = preXor ^ arr[i];
        int x = preXor ^ k;
        ans += map[x];
        map[x] += 1;
    }
    return ans;
}

int main()
{
    vector<int> arr = {4, 2, 2, 6, 4};
    int k = 6;
    int ans = subArrWithXorK(arr, k); // tc: O(n log n)
    cout << ans << endl;
    return 0;
}