#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int digits=0;
    while(n!=0)
    {
        digits++;
        n/=10;
    }
    cout<<digits<<endl;
    return 0;
}