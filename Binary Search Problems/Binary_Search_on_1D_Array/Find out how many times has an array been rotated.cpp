// we just have to find at what index minimum element is there , minimum element index is ans of how many time arr hav beet rotated.

#include <iostream>
#include <vector>
using namespace std;

int rotatedArr(vector<int> nums)
{
    int n = nums.size();
    int low = 0;
    int high = n - 1;
    int ans = -1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (nums[low] <= nums[high])
        {
            ans = low;
            break;
        }
        if (nums[mid] <= nums[high])
        {
            ans = min(ans, low);
            high = mid - 1;
        }
        else
        {
            ans = min(ans, low);
            low = mid + 1;
        }
    }
    return ans;
}

int main()
{

    vector<int> nums = {7, 8, 9, 1, 2, 3, 4, 5, 6};

    int ans = rotatedArr(nums);

    cout << ans;

    return 0;
}

// COMPLEXITY
// O(log n)