#include<iostream>
using namespace std;
int f(int n){
    // Base Case
    if(n==0 ||n==1) return 1;
    return n*f(n-1);;
}
int main(){
    int result = f(5);
    cout<<result;
    return 0;
}