#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> rotate(vector<vector<int>> &array)
{
    int n = array.size();
    vector<vector<int>> ansMatrix(n, vector<int>(n, 0));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            ansMatrix[j][n - 1 - i] = array[i][j];
        }
    }
    return ansMatrix;
}

void rotateOptimal(vector<vector<int>> &array)
{
    int n = array.size();
    // transpose the array
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            swap(array[i][j], array[j][i]);
        }
    }
    // reverse the row of array
    for (int i = 0; i < n; i++)
    {
        reverse(array[i].begin(), array[i].end());
    }
}

int main()
{

    vector<vector<int>> arr;
    arr = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    // vector<vector<int>> rotated = rotate(arr);

    rotateOptimal(arr);

    cout << "Rotated Image" << endl;
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[0].size(); j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}