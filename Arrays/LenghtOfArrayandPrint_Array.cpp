#include<iostream>
using namespace std;
int main()
{
    int array[]={1,2,3,4};
    // cout<<"Size of the array: "<<sizeof(array)<<endl;
    // cout<<"Lenght of the array: "<<sizeof(array)/sizeof(array[0])<<endl;
    // int size = sizeof(array)/sizeof(array[0]);
    // //for loop
    // for(int idx=0;idx<size;idx++){
    //     cout<<array[idx]<<" ";
    // }
    // cout<<endl;
    // //for each loop
    // for(int ele:array){
    //     cout<<ele<<" ";
    // }
    // cout<<endl;
    // int index=0;
    // while(index<size){
    //     cout<<array[index]<<" ";
    //     index++;
    // }
    char vowels[5];
    // using foor loop array input
    // for(int idx=0;idx<5;idx++){
    //     cin>>vowels[idx];
    // }
    // using for each loop array input
    for(char &element:vowels){
        cin>>element;
    }
    for(int idx=0;idx<5;idx++){
        cout<<vowels[idx]<<" ";
    }

    return 0;
}