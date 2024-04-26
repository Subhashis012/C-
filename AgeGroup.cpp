#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter age: ";
    cin>>age;
    if(age<12){
        cout<<"Child"<<endl;
    }
    else if(age>60){
        cout<<"Senior"<<endl;
    }
    else if(age>18){
        cout<<"Adult"<<endl;
    }
    else{
        cout<<"Teeneger"<<endl;
    }
    return 0;
}