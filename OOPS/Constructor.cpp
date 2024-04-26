#include <iostream>
using namespace std;
class Rectangle
{
public:
    int l;
    int b;
    Rectangle() // default constructor - no argument passed
    {
        l = 0;
        b = 0;
    }
    Rectangle(int x, int y) // parameterized constructor - argument passed
    {
        l = x;
        b = y;
    }
    Rectangle(Rectangle &r)
    { // copy constructor - initialised an object by another existing object
        l = r.l;
        b = r.b;
    }
    ~Rectangle()
    {
        cout<<"Destructor is Called"<<endl;
    }
};
int main()
{
    Rectangle* r1 = new Rectangle();
    cout << "Length = " << r1->l << " Breadth = " << r1->b << endl;
    delete r1;
    Rectangle r2(3, 4);
    cout << "Length = " << r2.l << " Breadth = " << r2.b << endl;
    Rectangle r3 = r2;
    cout << "Length = " << r3.l << " Breadth = " << r3.b << endl;
    return 0;
}