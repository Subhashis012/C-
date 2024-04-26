#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter base: ";
    cin>>n;
    cout<<"Enter power: ";
    cin>>m;
    int power=1;
    for(int i=1;i<=m;i++)
    {
        power*=n;
    }
    cout<<power<<endl;
    
    return 0;
}