#include<iostream>
using namespace std;
int main(){
    int arr[]={3,4,6,7,1};
    int size=sizeof(arr)/sizeof(arr[0]);
    int targetSum;
    cout<<"Enter target sum: ";
    cin>>targetSum;
    int pairs=0;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]+arr[j]==targetSum){
                pairs++;
                cout<<"The Pair is:"<<arr[i]<<" "<<arr[j]<<endl;
            }
        }
    }
    cout<<"Pairs number: "<<pairs<<endl;
    return 0;
}