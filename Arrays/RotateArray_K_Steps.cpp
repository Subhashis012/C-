#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
int main()
{
    // int arr[]={1,2,3,4,5};
    // int n=sizeof(arr)/sizeof(arr[0]);
    // int k;
    // cout<<"Enter the number of steps: ";
    // cin>>k;
    // // k can be greater than n
    // k=k%n;
    // int ansarr[n];
    // int j=0;
    // // inserting last k elements in ans array
    // for(int i=n-k;i<n;i++)
    // {
    //     ansarr[j++]=arr[i];
    // }
    // // inserting first n-k elements in ans array
    // for(int i=0;i<=k;i++)
    // {
    //     ansarr[j++]=arr[i];
    // }
    // for(int i=0;i<n;i++)
    // {
    //     cout<<ansarr[i]<<" ";
    // }
    // cout<<endl;

    // Without using extra space using vector
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    int k;
    cout<<"Enter the number of steps: ";
    cin>>k;
    k=k%v.size();
    reverse(v.begin(),v.end());
    reverse(v.begin(),v.begin()+k);
    reverse(v.begin()+k,v.end());
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return 0;
}