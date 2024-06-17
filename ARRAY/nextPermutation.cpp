#include <bits/stdc++.h>
using namespace std;

vector<int> nextGreaterPermutation(vector<int> a)
{
    int n = a.size();
    // find out break point
    int index = -1;
    for (int i = n - 2; i >= 0; i--)
    {
        if (a[i] < a[i + 1])
        {
            index = i;
            break;
        }
    }
    if (index == -1)
    {
        reverse(a.begin(), a.end());
        return a;
    }

    // next greater elem and swap it with a[index]
    for (int i = n - 1; i < index; i--)
    {
        if (a[i] > a[index])
        {
            swap(a[i], a[index]);
            break;
        }
    }

    // reverse the right half
    reverse(a.begin() + index + 1, a.end());

    return a;
}

int main()
{
    vector<int> A = {2, 1, 5};
    vector<int> ans = nextGreaterPermutation(A);

    cout << "The next permutation is: [";
    for (auto it : ans)
    {
        cout << it << " ";
    }
    cout << "]n";

    return 0;
}