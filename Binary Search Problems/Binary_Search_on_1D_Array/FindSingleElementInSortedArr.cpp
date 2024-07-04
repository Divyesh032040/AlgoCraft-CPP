#include <iostream>
#include <vector>
using namespace std;

// brute force approach : liner search O(n);
int findSingleLiner(vector<int> arr)
{
    int n = arr.size();
    if (n == 1)
        return arr[0];

    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            if (arr[i] != arr[i + 1])
            {
                return arr[i];
            }
        }
        else if (i == n - 1)
        {
            if (arr[i] != arr[i - 1])
            {
                return arr[i];
            }
        }
        else
        {
            if (arr[i] != arr[i + 1] && arr[i] != arr[i - 1])
            {
                return arr[i];
            }
        }
    }
    return -1;
}

// binary search complexity : O(log n)

int findSingleBinary(vector<int> arr)
{
    int n = arr.size();
    int low = 0;
    int high = n - 1;
    int ans;

    // check single size arr
    if (n == 1)
        return arr[0];

    // check for first and last index
    if (arr[0] != arr[1])
        return arr[0];
    if (arr[n - 1] != arr[n - 2])
        return arr[n - 1];

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        low = 1;
        high = n - 2;
        // after elimination , it will true and return ans
        if (arr[mid] != arr[mid - 1] && arr[mid] != arr[mid + 1])
        {
            return arr[mid];
        }
        // elimination according to out observation
        //(even,odd) : eliminate left half  && (odd,even) : eliminate right half
        if ((mid % 2 == 1 && arr[mid] == arr[mid - 1]) || (mid % 2 == 0 && arr[mid] == arr[mid + 1]))
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}

int main()
{

    vector<int> arr = {2, 2, 3, 3, 4, 4, 5, 5, 5, 6, 7, 7, 8, 8};

    int ans = findSingleBinary(arr);

    cout << ans << endl;

    return 0;
}

/*
observation in binary approach
(even,odd) : if mid is at even index and its next odd index has same value means our single element is at right half and we eliminate left half

(odd,even) : else we trim down right half



 */