#include<iostream>
using namespace std;
int main()
{
    int arr[]={3,9,18,7,11};
    int key=3;
    int ans=-1; //initialize answer as -1
    for(int i=0;i<5;i++){
        if(arr[i]==key){
            ans=i;
            break; 
        }
    }
    cout<<ans<<endl;
    return 0;
}