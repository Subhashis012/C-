#include <iostream>
using namespace std;
int main()
{
    int n,m;
    cout<<"Enter row no.: ";
    cin>>n;
    cout<<"Enter column no.: ";
    cin>>m;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}