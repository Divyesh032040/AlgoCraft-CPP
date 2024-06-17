#include <bits/stdc++.h>
using namespace std;

vector<int> SpiralTraversalOfMatrix(vector<vector<int>> mat)
{

    int n = mat.size();
    int m = mat[0].size();
    vector<int> ans;

    int top = 0;
    int left = 0;
    int bottom = n - 1;
    int right = m - 1;

    while (left <= right && top <= bottom)
    {

        // left to right traversal
        for (int i = left; i <= right; i++)
        {
            ans.push_back(mat[top][i]);
        }
        top++;

        // top to bottom traversal
        for (int i = top; i <= bottom; i++)
        {
            ans.push_back(mat[i][right]);
        }
        right--;

        // right to left traversal
        if (top <= bottom)
        {
            for (int i = right; i >= left; i--)
            {
                ans.push_back(mat[bottom][i]);
            }
            bottom--;
        }

        // bottom to top traversal
        if (left <= right)
        {
            for (int i = bottom; i >= top; i--)
            {
                ans.push_back(mat[i][left]);
            }
            left++;
        }
    }

    return ans;
}

int main()
{

    vector<vector<int>> mat = {{1, 2, 3, 4},
                               {5, 6, 7, 8},
                               {9, 10, 11, 12},
                               {13, 14, 15, 16}};

    vector<int> myAns = SpiralTraversalOfMatrix(mat);

    for (int i = 0; i < myAns.size(); i++)
    {

        cout << myAns[i] << " ";
    }

    cout << endl;

    return 0;
}