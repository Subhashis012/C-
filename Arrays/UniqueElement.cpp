#include<iostream>
using namespace std;
int main(){
    int arr[]={2,3,1,3,2,4,1};
    int size=sizeof(arr)/sizeof(arr[0]);
    int uniqueElement=0;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
             if(arr[i]==arr[j]){
                arr[i]=arr[j]=-1;
            }
        }
    }
    for(int i=0;i<size;i++){
        if(arr[i]>0){
            uniqueElement=arr[i];
            cout<<"The index is: "<<i<<endl;
        }
    }
    cout<<"The unique element is: "<<uniqueElement<<endl;
    return 0;
}