#include <iostream>
using namespace std;
int main()
{
    int * ptr; // Only declaring the pointer
    cout<<ptr<<endl;
    int marks = 90;
    ptr = &marks; // re-assignment / update jokhon korbo tokhon '*' use korar dorkar nei
    cout<<ptr<<endl;
    return 0;
}