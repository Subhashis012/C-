#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void rotateArray(vector<vector<int>> &V)
{
    // transpose
    for(int i=0;i<V.size();i++){
        for(int j=0;j<i;j++){
            swap(V[i][j],V[j][i]);
        }
    }
    // reverse every now
    for(int i=0;i<V.size();i++){
        reverse(V[i].begin(),V[i].end());
    }
    return;
}
int main()
{
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    vector <vector<int>> vec(n,vector<int> (n));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>vec[i][j];
        }
    }
    rotateArray(vec);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<"The  90 degree rotate array is:"<<vec[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}