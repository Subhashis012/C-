#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter line no.: ";
    cin>>n;
    // int nst=1;
    // int nsp=n-1;
    // for(int i=1;i<=n;i++)
    // {
    //     for(int j=1;j<=nsp;j++)
    //     {
    //         cout<<" ";
    //     }
    //     for(int k=1;k<=nst;k++)
    //     {
    //         cout<<"*";
    //     }
    //     cout<<endl;
    //     nst+=2;
    //     nsp--;
    // }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=(n-i);j++)
        {
            cout<<" ";
        }
        for(int j=1;j<=(2*i-1);j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}