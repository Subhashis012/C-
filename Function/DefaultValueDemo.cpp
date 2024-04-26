#include<iostream>
using namespace std;
void fun(int x,int y=100,int z=30,int a=9){
    cout<<x<<" "<<y<<" "<<z<<" "<<a<<endl;
}
int main()
{
    fun(10,1);
    return 0;
}