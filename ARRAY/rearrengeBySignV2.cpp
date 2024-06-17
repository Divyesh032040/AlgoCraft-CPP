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

int main()
{
    int n = 4;
    vector<int> A{1, 2, -4, -5};

    vector<int> ans = RearrangeBySign(A, n);

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}