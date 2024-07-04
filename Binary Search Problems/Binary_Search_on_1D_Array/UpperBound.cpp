
// Problem Statement: Given a sorted array of N integers and an integer x, write a program to find the upper bound of x.

// arr[mid] > target

#include <iostream>
#include <vector>
using namespace std;

int lowerBound(vector<int> arr, int n, int x)
{

    int ans = n; // initial with n so that if target is not in btw arr , it will be last index
    int low = 0;
    int high = n - 1;

    while (low <= high)
    {

        int mid = low + (high - low) / 2;

        if (arr[mid] == x)
        {
            ans = mid;
        }
        else if (arr[mid] > x)
        {
            ans = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return ans;
}

int main()
{

    vector<int> arr = {3, 5, 8, 15, 19};
    int n = 5, x = 9;
    int lowerIndex = lowerBound(arr, n, x); // 3
    cout << lowerIndex << endl;
    return 0;
}

// ans will be 3 because lowest index which is greater than equal to 9 is 15 which is at index 3.
// time complexity : log base 2 of n : O(log n)