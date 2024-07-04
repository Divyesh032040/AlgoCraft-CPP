#include <iostream>
#include <vector>
using namespace std;

// brute force approach with linear search
vector<int> solve(vector<int> &nums, int target)
{
    int n = nums.size();
    int first = -1;
    vector<int> ans;
    int last = -1;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] == target)
        {
            if (first == -1)
                first = i;
            else
                last = i;
        }
    }
    return ans = {first, last};
}

// optimal approach with binary search with upper and lower bound
int lowerBound(vector<int> &nums, int target)
{
    int n = nums.size();
    int low = 0;
    int high = n - 1;
    int lowerBoundIndex = n;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (nums[mid] >= target)
        {
            lowerBoundIndex = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return lowerBoundIndex;
}

int upperBound(vector<int> &nums, int target)
{
    int n = nums.size();
    int low = 0;
    int high = n - 1;
    int upperBoundIndex = n;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (nums[mid] > target)
        {
            upperBoundIndex = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return upperBoundIndex;
}

vector<int> searchRange(vector<int> &nums, int target)
{
    int n = nums.size();
    int lb = lowerBound(nums, target);
    if (lb == n || nums[lb] != target)
        return {-1, -1};
    int ub = upperBound(nums, target) - 1;
    return {lb, ub};
}

/*
 other approach approach with using plain binary search and not lower bound and upper bound

 ther we will find first occur with one binary search than last occur with another binary search.*/

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

pair<int, int> firstAndLatOccurrence(vector<int> nums, int target, int n)
{
    int first = firstOccurrenceElement(nums, target);
    if (first == -1)
        return {-1, -1};
    int last = lastOccurrenceElement(nums, target);
    return {first, last};
}

int main()
{

    int n = 7;
    int target = 13;
    vector<int> nums = {3, 4, 13, 13, 13, 20, 40};

    // returning the first and last occurrence index  if the element is present otherwise -1
    // vector<int> ans = searchRange(nums, target); //[2,4]

    // for (auto it : ans)
    // {
    //     cout << it << " ";
    // }

    pair<int, int> ans = firstAndLatOccurrence(nums, target, n);

    cout << "first occurrence " << ans.first << " second occurrence " << ans.second << endl;

    return 0;
}

/*
brute force : tc : O(n);
first optimal : tc: 2*O(log n);
second optimal : tc : 2*O(log n);

space complexity for all is constant O(1);

*/