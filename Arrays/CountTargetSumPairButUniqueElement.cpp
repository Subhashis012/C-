#include<iostream>
using namespace std;
int main()
{
    int arr[]= {-2,-1,0,1,3,4,6,8,11,12};
    int x = 12;
    int n = sizeof(arr)/sizeof(arr[0]);
    // code to find if there is a pair with sum equal to x
    int i =0;
    int j=n-1;
    int answer=0; 
    while(i<j)
    {
        if(arr[i]+arr[j]==x){
            // we found a pair
            answer+=1;
            i++;
            j--;
            cout<<"The pair is: "<<arr[i]<<" and "<<arr[j]<<endl;
            cout<<"The index is: "<<i<<" and "<<j<<endl;
            cout<<"The total pair is: "<<answer<<endl;
        }
        else if(arr[i]+arr[j]<x){
            // sum is less than x, increase the sum
            i++;
        }
        else{
            // sum is greater than x, decrease the sum
            j--;
        }
    }
    cout<<endl;
    return 0;
}