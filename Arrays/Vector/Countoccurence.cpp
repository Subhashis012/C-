#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v(6);
    for(int i=0;i<v.size();i++){
        cin>>v[i];
    }
    int x;
    cout<<"Enter x: ";
    cin>>x;
    int occurance=0;
    for(int ele:v){
        if(ele==x){
            occurance++;
        }
    }
    cout<<occurance<<endl;

    return 0;
}