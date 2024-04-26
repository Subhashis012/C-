#include<iostream>
using namespace std;
class Parent1{
public:
    Parent1(){
        cout<<"Parent1 Class"<<endl;
    }
};
class Parent2{
public:
    Parent2(){
        cout<<"Parent2 Class"<<endl;
    }
};
// class Child:public Parent1,public Parent2{
// public:
//     Child(){
//         cout<<"Child Class"<<endl;
//     }    
// };
class Child1:public Parent1{
public:
    Child1(){
        cout<<"Child1 Class"<<endl;
    }
};
class Child2:public Parent2{
public:
    Child2(){
        cout<<"Child2 Class"<<endl;
    }
};
class GrandChild:public Child1,public Child2{
public:
    GrandChild(){
        cout<<"Grand Child Class"<<endl;
    }
};
int main()
{
    GrandChild C;
    return 0;
}
