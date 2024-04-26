#include <iostream>
using namespace std;
class Parent
{
public:
    virtual void print()
    {
        cout << "This is parent class" << endl;
    }
    void show()
    {
        cout << "This is parent class" << endl;
    }
};
class Child: public Parent
{
public:
    void print()
    {
        cout << "This is Child class" << endl;
    }
    void show()
    {
        cout << "This is Child class" << endl;
    }
};
int main()
{
    Parent *p;
    Child c;
    p = &c;
    p->print();
    p->show();
    return 0;
}