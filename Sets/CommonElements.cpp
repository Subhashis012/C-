#include<iostream>
#include<set>
#include<vector>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;

    vector<int >v1(n);
    vector<int >v2(m);  

    cout<<"Enter the elements of first vector: "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>v1[i];
    }              
    cout<<"Enter the elements of second vector: "<<endl;
    for(int i=0;i<m;i++)
    {
        cin>>v2[i];
    }              

    int ans_sum = 0;

    set<int> s1;
    for(auto ele:v1)
    {
        s1.insert(ele);
    }                  
    for(auto ele:v2) 
    {
        if(s1.find(ele)!=s1.end())
        {
            ans_sum+=ele;
        }
    }

    cout<<"The sum of common elements is: "<<ans_sum<<endl;
    return 0;
}