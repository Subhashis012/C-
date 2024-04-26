#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
// -10 -3 2 4 5 
// left_ptr = 3
// right_ptr = 2
// ans = [100 9 25 16 2]
void SortedSquareArray(vector<int> &v)
{
    vector<int> ans;
    int left_ptr=0;
    int right_ptr=v.size()-1;
    while(left_ptr<=right_ptr)
    {
        if(abs(v[left_ptr])<abs(v[right_ptr]))
        {
            ans.push_back(v[right_ptr]*v[right_ptr]);
            right_ptr--;
        }
        else{
            ans.push_back(v[left_ptr]*v[left_ptr]);
            left_ptr++;
        }
    }
    reverse(ans.begin(),ans.end());
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
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
    SortedSquareArray(v);
    return 0;
}