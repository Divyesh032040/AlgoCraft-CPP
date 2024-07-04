/*
identify sorted half arr -> if its left half : take ans = arr[low] or if its right half : take ans = arr[mid] and eliminate it from search space.
*/

/*
identify sorted half arr -> if its left half : take ans = arr[low] or if its right half : take ans = arr[mid] and eliminate it from search space.
*/
#include <bits/stdc++.h>
using namespace std;
int minimumInArr(vector<int> nums)
{
    int n = nums.size();
    int low = 0;
    int high = n - 1;
    int ans = INT_MAX;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        // optimization : search space is already sorted
        // then arr[low] will always be
        // the minimum in that search space:
        if (nums[low] <= nums[high])
        {
            ans = min(ans, nums[low]);
            break;
        }

        if (nums[low] <= nums[mid])
        {
            // left half sorted
            ans = min(ans, nums[low]);
            low = mid + 1;
        }
        else
        {
            // right half sorted
            ans = min(ans, nums[mid]);
            high = mid - 1;
        }
    }
    return ans;
}

int main()
{

    vector<int> nums = {7, 8, 9, 3, 4, 5, 6};

    int minimum = minimumInArr(nums);

    cout << minimum << endl;

    return 0;
}

// tc:log n LC RANK : 1,809,331
