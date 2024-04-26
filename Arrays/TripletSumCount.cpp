#include<iostream>
using namespace std;
int main(){
    int arr[]={3,1,2,4,0,6};
    int size = sizeof(arr)/sizeof(arr[0]);
    int targetSum=6;
    // cout<<"Enter target sum: ";
    // cin>>targetSum;
    int triplet=0;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            for(int k=j+1;k<size;k++){  
                if(arr[i]+arr[j]+arr[k]==targetSum){
                    triplet++;
                    cout<<"The triplet is: "<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<endl;
                }
            }
        }
    }
    cout<<"Triplet pair: "<<triplet<<endl;
    return 0;
}