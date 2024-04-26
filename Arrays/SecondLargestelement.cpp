#include<iostream>
#include<limits.h>
using namespace std;
// int largestElementIndex(int arr[], int size){
//     int max=INT_MIN; // Initializing the maximum element to INT_MIN
//     int maxidx=-1;
//     for(int i=0;i<size;i++){
//         if(arr[i]>max){
//         max=arr[i]; 
//         maxidx=i;
//         }
//     }
//     return maxidx;    
// }
int secondLargestElement(int arr[], int size){
    int max=INT_MIN; // Initializing the maximum element to INT_MIN
    int secondMax=INT_MIN;
    for(int i=0;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    for(int i=0;i<size;i++){
        if(arr[i]>secondMax && arr[i]<max){
            secondMax=arr[i];
        }
    }
    return secondMax;
}
int main()
{
    int arr[]={2,3,5,7,6,7};
    int size=sizeof(arr)/sizeof(arr[0]);
    // int indexOfLargestEle=largestElementIndex(arr,size);
    // cout<<"The largest element is: "<<arr[indexOfLargestEle]<<endl;
    // cout<<"The index of largest element is: "<<indexOfLargestEle<<endl;
    // //arr[indexOfLargestEle]=-1;
    // int largestElement = arr[indexOfLargestEle];
    // for(int i=0;i<size;i++){
    //     if(arr[i]==largestElement){
    //         arr[i]=-1;
    //     }
    // }
    // int indexOfSecondLargest=largestElementIndex(arr,size);
    // cout<<"The second largest element is: "<<arr[indexOfSecondLargest]<<endl;
    // cout<<"The index of second largest element is: "<<indexOfSecondLargest<<endl;
    cout<<"The second largest element is: "<<secondLargestElement(arr,size)<<endl;
    return 0;
}