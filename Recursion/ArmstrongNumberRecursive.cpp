#include<iostream>
using namespace std;
int power(int p,int q){
    if(q==0) return 1;
    if(q%2==0){
        int result = power(p,q/2);
        return result*result;
    }
    else{
        int result = power(p,(q-1)/2);
        return p*result*result;
    }
}
int f(int n,int d){
    if(n==0) return 0;
    return power(n%10,d)+f(n/10,d);
}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int no_of_digits = 0;
    int temp = n;
    while(temp>0){
        temp /= 10;
        no_of_digits++;
    }
    int result =f(n,no_of_digits);
    if(result == n) cout<<"Armstrong Number";
    else cout<<"Not a Armstrong Number";
    return 0;
}