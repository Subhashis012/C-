#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;
// 0 1 1 1
// 0 0 0 1
// 0 0 1 1
// maxOnes = 3
// maxOnesRow = 0
// coulmns = 4
// numberOfOnes = columns - j = 4-1 = 3,4-1 = 3,4-2 = 2
int LeftMostOneRow(vector<vector<int>> &v)
{
    int leftMostOne = -1;
    int maxOneRow = -1;
    // finding leftmost one in 0th row
    // for(int j=v[0].size()-1;j>=0;j--){
    //     if(v[0][j]==1){
    //         leftMostOne = j;
    //     }
    //     else{
    //        break; 
    //     }
    // }
    int j = v[0].size()-1;
    while(j>=0 && v[0][j]==1){
        leftMostOne = j;
        maxOneRow = 0;
        j--;
    }
    // check in rest of the rows if we can 
    for(int i=1;i<v.size();i++){
        while(j>=0 && v[i][j]==1){
            leftMostOne = j;
            maxOneRow = i;
            j--;
        }
    }
    return maxOneRow;
}
// int MaximumOneRow(vector<vector<int>> &v)
// {
//     int maxOnes = INT_MIN;
//     int maxOnesRow = -1;
//     int columns = v[0].size();
//     for (int i = 0; i < v.size(); i++)
//     {
//         for (int j = 0; j < v[i].size(); j++)
//         {
//             if (v[i][j] == 1)
//             {
//                 int numberOfOnes = columns - j;
//                 if (numberOfOnes > maxOnes)
//                 {
//                     maxOnes = numberOfOnes;
//                     maxOnesRow = i;
//                 }
//                 break;
//             }
//         }
//     }
//     return maxOnesRow;
// }
int main()
{
    int n, m;
    cout << "Enter the number of rows and columns: ";
    cin >> n >> m;
    vector<vector<int>> vec(n, vector<int>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> vec[i][j];
        }
    }
    int res=LeftMostOneRow(vec); //= MaximumOneRow(vec);
    cout <<"The maximum number of 1's in a row is:" <<res << endl;
    return 0;
}