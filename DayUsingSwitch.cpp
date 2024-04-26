#include<iostream>
using namespace std;
int main(){
    int day;
    cout<<"Enter a day: ";
    cin>>day;
    switch(day){
        case 1:
        cout<<"Mon"<<endl;
        break;
        case2:
        cout<<"Tue"<<endl;
        break;
        case 3:
        cout<<"Wed"<<endl;
        break;
        case 4:
        cout<<"Thurs"<<endl;
        break;
        default:
        cout<<"Default Case!"<<endl;
    }
    return 0;
}