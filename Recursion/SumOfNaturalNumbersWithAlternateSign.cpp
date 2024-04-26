#include<iostream>
using namespace std;
int f(int n)
{
    if(n==0) return 0;
    return f(n-1)+ ((n%2==0)?(-n):n); // calculate sum of the first n-1 natural numbers with alternate, and we will add contri of n
}
int main(){
    cout<<f(5);
    return 0;
}