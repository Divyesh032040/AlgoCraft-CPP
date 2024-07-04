/*

her in sorted rotated arr contain also duplicate elements and we have to identify is there is given target int is there or not. return true if there else false.

so we can also apply prev first version solution where we identify half sorted arr and find element target by binary search , but her problem is we can't apply binary search because may be this edge case is apply where we have arr where arr[low] == arr[mid] and arr[mid] == arr[high] so to avoid it we just have to apply one condition that we its true than we trim down arr by reducing 1 index of high and add one in low index till we have either arr[low] !+ arr[mid] or arr[mid] !+ arr[high] so that we can identify which half side of arr from mid is sorted and find presence if target in arr.


herr is our leet code solution
*/

class Solution
{
public:
    bool search(vector<int> &nums, int target)
    {
        int n = nums.size();
        int low = 0;
        int high = n - 1;

        while (low <= high)
        {
            int mid = low + (high - low) / 2;

            if (nums[mid] == target)
            {
                return true;
            }
            // this condition is important
            if (nums[low] == nums[mid] && nums[mid] == nums[high])
            {
                low = low + 1;
                high = high - 1;
                continue;
            }

            // identify sorted half of array
            if (nums[low] <= nums[mid])
            {
                if (nums[mid] >= target && nums[low] <= target)
                {
                    high = mid - 1;
                }
                else
                {
                    low = mid + 1;
                }
            }
            else
            {
                // right half
                if (nums[mid] <= target && nums[high] >= target)
                {
                    low = mid + 1;
                }
                else
                {
                    high = mid - 1;
                }
            }
        }
        return false;
    }
};