#include <iostream>
using namespace std;
int main()
{
    int x = 18;
    float y = 7.9;
    // Create a pointer that can store the address of x
    // As x is an integer variable, so we need a pointer
    // that can store of integer type
    int *ptr = &x;
    cout<<"Address stored in ptr: "<<ptr<<endl;
    cout<<"Value present at the address stored in ptr: "<<*ptr<<endl; // derefence operator
     // Create a pointer that can store the address of y
    // As y is an float variable, so we need a pointer
    // that can store of float type
    float *ptrf = &y;
    cout<<"Address stored in ptr: "<<ptrf<<endl;
    cout<<"Value present at the address stored in ptr: "<<*ptrf<<endl;
    x=23; // the bucket x updated the value from 18 -> 23
    // but ptr and ptrf are still pointing to the same address
    // now if we derefence ptr, we will get 23
    cout<<"New updated value of x: "<<x<<endl;
    cout<<"ptr still pointing to same memory which has 23 instead of 18: "<<*ptr<<endl;
    // Updating x with pointer
    *ptr = 50;
    cout<<"New value of x: "<<x<<endl;
    cout<<"New value pointed by ptr: "<<*ptr<<endl;
    int valueAtX = *ptr;
    cout<<"Value at ptr: "<<valueAtX<<endl;
    return 0;
}