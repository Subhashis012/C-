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
    return 0;
}