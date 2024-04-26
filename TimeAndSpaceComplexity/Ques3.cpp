#include<iostream>
using namespace std;
int main()   // O(n+m) time complexity
{
    int arr1[]={1,2,3,4,5,6,7,8,9};
    int n = sizeof(arr1)/sizeof(arr1[0]);
    int arr2[]={1,2,4,12,7,11,0,8,9};
    int m = sizeof(arr2)/sizeof(arr2[0]);
    int sum1= 0;
    int sum2 = 0;
    for(int i=0;i<n;i++)
    {
        sum1 = sum1 + arr1[i];
    }
    for(int i=0;i<m;i++)
    {
        sum2 = sum2 + arr2[i];
    }
    cout<<"Sum of first array: "<<sum1<<endl;
    cout<<"Sum of second array: "<<sum2<<endl;
    return 0;
}