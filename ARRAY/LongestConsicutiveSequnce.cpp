#include <bits/stdc++.h>
using namespace std;

bool linerSearch(vector<int> a, int k)
{
    int n = a.size();
    for (int i = 0; i < n; i++)
    {
        if (a[i] == k)
        {
            return true;
        }
    }
    return false;
}

int LongestConsecutiveSequenceBrute(vector<int> a)
{
    int n = a.size();
    int longest = 1;

    for (int i = 0; i < n; i++)
    {
        int currentIndex = a[i];
        int counter = 1;

        while (linerSearch(a, currentIndex + 1) == true)
        {
            currentIndex += 1;
            counter += 1;
        }
        longest = max(longest, counter);
    }
    return longest;
}

int LongestConsecutiveSequenceOptimal(vector<int> a)
{
    int longest = 1;
    int counter = 0;
    int lastSmaller = INT_MIN;
    sort(a.begin(), a.end());
    for (int i = 0; i < n; i++)
    {
        if (a[i] - 1 == lastSmaller)
        {
            count += 1;
            lastSmaller = a[i];
        }
        else if (a[i] != lastSmaller)
        {
            count = 0;
            lastSmaller = a[i];
        }
        longest = max(longest, count);
    }
}

int main()
{

    vector<int> a = {100, 200, 1, 2, 3, 4};
    int ans = LongestConsecutiveSequenceBrute(a);
    cout << "The longest consecutive sequence is " << ans << "\n";

    return 0;
}