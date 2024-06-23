// pass arr by ref
#include <bits/stdc++.h>
using namespace std;

void mergeArray(int arr[], int low, int mid, int high)
{
    // play with indexes
    int left = low;
    int right = mid + 1;

    vector<int> temp;

    while (left <= mid && right <= high)
    {
        if (arr[left] <= arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }
        else
        {
            temp.push_back(arr[right]);
            right++;
        }
    }

    while (left <= mid)
    {
        temp.push_back(arr[left]);
        left++;
    }

    while (right <= high)
    {
        temp.push_back(arr[right]);
        right++;
    }

    for (int i = low; i <= high; i++)
    {
        arr[i] = temp[i - low];
    }
}

void merge_sort(int arr[], int low, int high)
{
    if (low == high)
        return;
    int mid = (low + high) / 2;

    merge_sort(arr, low, mid);
    merge_sort(arr, mid + 1, high);
    mergeArray(arr, low, mid, high);
}

int main()
{
    int n = 7;
    int arr[n] = {4, 3, 2, 6, 1, 9, 2};

    merge_sort(arr, 0, 6);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}