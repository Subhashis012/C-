#include<iostream>
#include<vector>
using namespace std;
// 5 4 1 2 3
// 5 9 1 2 3
// 5 9 10 2 3
// 5 9 10 12 3
// 5 9 10 12 15
void runningSum(vector<int> &v)
{
    for(int i=1;i<v.size();i++)
    {
        v[i]+=v[i-1];
    }
    return;
}
int main()
{
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        int ele;
        cin>>ele;
        v.push_back(ele);
    }
    runningSum(v);
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return 0;
}