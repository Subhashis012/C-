#include<iostream>
using namespace std;
int main(){
    int n1,n2;
    cout<<"Enter two integers: ";
    cin>>n1>>n2;
    cout<<"Enter an operaor(+,-,*,/,%): ";
    char op;
    cin>>op;
    switch(op){
        case '+':
            cout<<"Sum is: "<<n1+n2<<endl;
            break;
        case '-':
            cout<<"Difference is: "<<n1-n2<<endl;
            break;
        case '*':
            cout<<"Product is: "<<n1*n2<<endl; 
            break;
        case '/':
            cout<<"Division is: "<<n1/n2<<endl;
            break;
        case '%':
            cout<<"Remainder is: "<<n1%n2<<endl;
            break;   
        default:
            cout<<"Enter a valid operator!"<<endl;
            break;            
    }
    return 0;
}