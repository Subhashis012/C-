#include<iostream>
using namespace std;
int main()
{
    int arr[3]={15,12,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int *ptr=&arr[0];
    cout<<ptr<<" "<<arr<<" "<<*ptr<<" "<<*arr<<endl;
    cout<<*(arr+0)<<endl;
    cout<<*(arr+1)<<endl;
    cout<<*(arr+2)<<endl;
    for(int i=0;i<n;i++){
        cout<<*(arr+i)<<" ";
    }
    return 0;
}