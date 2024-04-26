#include<iostream>
#include<vector>
using namespace std;
void BubbleSort(vector<int> &v){
    int n = v.size();
    for(int i=0;i<n-1;i++){
        bool flag = false;
        for(int j=0;j<n-i-1;j++){
            if(v[j]>v[j+1]){
                flag = true;
                swap(v[j],v[j+1]);
            }
        }
        if(!flag) break;
    }
    return;
}
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    vector<int> v(n);
    cout<<"Enter the elements of array: ";
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    BubbleSort(v);
    cout<<"Sorted array: ";
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return 0;
}