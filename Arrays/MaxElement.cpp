#include<iostream>
using namespace std;
int main()
{
    int arr[]={3,7,18,9,11};
    int max=arr[0];
    for(int i=1;i<5;i++){
        if(max<arr[i]){ 
            max=arr[i];
        }
    }
    cout<<"The max element is: "<<max;
    return 0;
}