#include<iostream>
using namespace std;
int square(int n)
{
    return n*n;
}
double circumference(int r)
{
    return 2*3.14*r;
}
double area(int r)
{
    return 3.14*square(r);
}
int main()
{
    int radious;
    cout<<"Enter radious: ";
    cin>>radious;
    cout<<"The area of circle is: "<<area(radious)<<endl;
    cout<<"The circumference of circle is: "<<circumference(radious)<<endl;
    return 0;
}