// Example
// Input:
//  N = 7,  X = 3 , array[] = {2, 2 , 3 , 3 , 3 , 3 , 4}
// Output : 4

// approach : last occurrence index - first occurrence index + 1

#include <bits/stdc++.h>
using namespace std;

int firstOccurrenceElement(vector<int> nums, int target)
{
    int n = nums.size();
    int low = 0;
    int high = n - 1;
    int first = -1;
    while (low <= high)
    {
        int mid = low + (high - 1) / 2;
        if (nums[mid] == target)
        {
            first = mid;
            high = mid - 1;
        }
        else if (nums[mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return first;
}

int lastOccurrenceElement(vector<int> nums, int target)
{
    int n = nums.size();
    int low = 0;
    int high = n - 1;
    int last = -1;
    while (low <= high)
    {
        int mid = low + (high - 1) / 2;
        if (nums[mid] == target)
        {
            last = mid;
            low = mid + 1;
        }
        else if (nums[mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return last;
}

int main()
{

    int target = 3;

    vector<int> nums = {2, 2, 3, 3, 3, 3, 4};

    int first = firstOccurrenceElement(nums, target);

    int last = lastOccurrenceElement(nums, target);

    int ans = last - first + 1;

    cout << ans << endl;

    return 0;
}

/*
time complexity : 2 times we run binary search for find first and last occurrence in arr
so time complexity is 2*log n and space complexity is 0(1)
*/