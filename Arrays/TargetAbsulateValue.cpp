#include<iostream>
using namespace std;
int main()
{
    int arr[]={9,23,45,69,78};
    int n=sizeof(arr)/sizeof(arr[0]);
    int x;
    cout<<"Enter the target value: ";
    cin>>x;
    // code to check wheather there is a pair with the given abs difference
    int i=0,j=1;
    bool found = false;
    while(i<n and j<n)
    {
        if(abs(arr[i]-arr[j])==x){
            found = true;
            break;
        }
        else if(abs(arr[i]-arr[j])<x){
            j++;
        }
        else{
            i++;
        }
    }
    if(found==true){
        cout<<"The pair is: "<<arr[i]<<" and "<<arr[j]<<endl;
        cout<<"The index is: "<<i<<" and "<<j<<endl;
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
    return 0;
}