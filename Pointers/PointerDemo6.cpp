#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cin>>x>>y; // taking input of x and y;
    int *ptrx = &x; // &x fetches address of x and then store in ptrx
    int *ptry = &y; // &y fetches address of x and then store in ptry
    int result;
    int *ptr_result = &result;
    *ptr_result = (*ptrx) + (*ptry);
    /**
     *  *ptrx -> 10
     *  *ptry -> 20
     *  *ptrx + *ptry -> 30
     *  *ptr_result -> 30; We store 30 on the address stored in *ptr_result
     *  *result -> 30
    */
    cout<<*ptr_result;
    return 0;
}