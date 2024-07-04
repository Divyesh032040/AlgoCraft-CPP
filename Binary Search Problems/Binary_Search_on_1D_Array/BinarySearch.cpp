#include <iostream>
#include <vector>
using namespace std;

int BinarySearch(vector<int> arr, int target)
{
    int n = arr.size();
    int low = 0;
    int high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == target)
            return mid;
        else if (arr[mid] > target)
            return high = mid - 1;
        else
            low = mid + 1;
    }
    return -1;
}

// recursive implementation of binary search

int recursiveBinarySearch(vector<int> arr, int low, int high, int target)
{
    // base condition

    int n = arr.size();

    if (low > high)
        return -1;

    // int mid = (low + high) / 2;

    int mid = low + (high - low) / 2;

    if (arr[mid] == target)
        return mid;

    else if (arr[mid] > target)
    {
        return recursiveBinarySearch(arr, 0, mid - 1, target);
    }
    else
        return recursiveBinarySearch(arr, mid + 1, n - 1, target);
}

int main()
{

    vector<int> arr = {2, 7, 8, 88};

    int target = 8;

    int TargetIndex = BinarySearch(arr, target);

    if (TargetIndex != -1)
    {
        cout << "Target element " << target << " is present at Index No: " << TargetIndex << " in given sorted array." << endl;
        cout << "time complexity : log n" << endl;
    }
    else
    {
        cout << "target is not present in array" << endl;
    }

    return 0;
}