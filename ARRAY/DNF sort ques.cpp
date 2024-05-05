#include <bits/stdc++.h>
using namespace std;

void sortDNF(vector<int> &arr)
{
    int n = arr.size();
    int low, mid = 0;
    int high = n - 1;

    while (mid <= high)
    {
        if (arr[mid] == 0)
        {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }
        else if (arr[mid] == 1)
        {
            mid++;
        }
        else
        {
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}

int main()
{
    vector<int> arr = {1, 2, 1, 2, 0, 0, 1, 1, 2, 1, 0, 0};
    int n = arr.size(); //(n) and sc : O(1)
    sortDNF(arr);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }

    return 0;
}