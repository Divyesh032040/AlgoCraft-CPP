#include <bits/stdc++.h>
using namespace std;

int findIndexOfTarget(vector<int> arr, int target)
{
    int n = arr.size();
    int low = 0;
    int high = n - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target)
            return mid;
        // identify sorted half of array
        if (arr[low] <= arr[mid])
        {
            // left half
            if (arr[mid] >= target && arr[low] <= target)
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        // right half
        else
        {

            if (arr[mid] <= target && arr[high] >= target)
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
    }
    return -1;
}
int main()
{
    int target = 8;
    vector<int> arr = {6, 7, 8, 1, 2, 3, 4, 5};
    int ans = findIndexOfTarget(arr, target);
    cout << ans << endl;

    return 0;
}

/// tc:O(log n)