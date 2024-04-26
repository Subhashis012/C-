#include<iostream>
using namespace std;
int main()
{
    int x =9;
    int y = 10;
    int *ptr = &x;
   // ptr = 5;  we can't do this as ptr only stores address nothing else
   // *ptr  = &y; this wont work as we cannot store address in an int bucket
   cout<<"Address of x: "<<&x<<endl;
   cout<<"Address stored inside ptr: "<<ptr<<endl;
   cout<<"Address of ptr itself: "<<&ptr; //  Print the address of the ptr bucket not the address stored in ptr
    return 0;
}