#include <iostream>
#include <vector>
#include <stack>
#include <queue>
#include <cmath>
#include <climits>
#include <algorithm>
#include <string>
#include <map>
#include <set>
#include <bits/stdc++.h>
using namespace std;

vector<int> RearrangeBySign(vector<int> A, int n)
{
    vector<int> positive;
    vector<int> negative;
    for (int i = 0; i < n; i++)
    {
        if (A[i] < 0)
        {
            negative.push_back(A[i]);
        }
        else
        {
            positive.push_back(A[i]);
        }
    }
    for (int i = 0; i < n / 2; i++)
    {
        A[i * 2] = positive[i];
        A[i * 2 + 1] = negative[i];
    }
    return A;
}

vector<int> RearrangeBySignOptimal(vector<int> A, int n)
{
    vector<int> ans(n, 0);
    int posIndex = 0;
    int negIndex = 1;
    for (int i = 0; i < n; i++)
    {
        if (A[i] > 0)
        {
            ans[posIndex] = A[i];
            posIndex += 2;
        }
        else
        {
            ans[negIndex] = A[i];
            negIndex += 2;
        }
    }
    return ans;
}

// if we font have equal number of positive and negative element than we have to move to our brute force approach

int main()
{
    // Array Initialisation.
    int n = 4;
    vector<int> A{1, 2, -4, -5};

    vector<int> ans = RearrangeBySign(A, n);

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}