#include <iostream>
using namespace std;
int main()
{
    float x = 4.5;
    float * ptr = &x;
    cout << ptr;
    return 0;
}