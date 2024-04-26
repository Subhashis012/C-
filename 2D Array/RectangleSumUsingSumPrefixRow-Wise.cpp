#include <iostream>
#include <vector>
using namespace std;
// [ [1 2 3 4],
//   [5 6 7 8],
//   [9 10 11 12] ]
// sum = 13 + 21 = 34
// [ [1 3 6 10],
//   [5 11 18 26],
//   [9 19 30 42] ]
// i -> from 1 to 2
// sum += (matrix[1][2] - matrix[1][1  - 1]=[0]) = 18 - 5 = 13
// sum += (matrix[2][2] - matrix[2][1  - 1]=[0]) = 30 - 9 = 21 
int rectangleSum(vector<vector<int>> matrix, int l1, int r1, int l2, int r2)
{
    int sum = 0;
    // Prefix sum array row-wise
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 1; j < matrix[0].size(); j++)
        {
            matrix[i][j] += matrix[i][j - 1];
        }
    }
    // Print prefix sum array row-Wise
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[i].size(); j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    for (int i = l1; i <= l2; i++)
    {
        if (r1 != 0)
        {
            sum += (matrix[i][r2] - matrix[i][r1 - 1]);
        }
        else
        {
            // matrix[i][r1-1] = 0
            sum += matrix[i][r2];
        }
    }
    return sum;
}
int main()
{
    int n, m;
    cout << "Enter the number of rows and columns: ";
    cin >> n >> m;
    vector<vector<int>> matrix(n, vector<int>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> matrix[i][j];
        }
    }
    int l1, r1, l2, r2;
    cout << "Enter the coordinates of rectangle: ";
    cin >> l1 >> r1 >> l2 >> r2;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    int sum = rectangleSum(matrix, l1, r1, l2, r2);
    cout << "Sum of rectangle: " << sum << endl;
    return 0;
}