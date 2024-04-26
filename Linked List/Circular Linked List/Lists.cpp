#include <iostream>
#include <list>
using namespace std;
int main()
{
    list<int> l1 = {1, 2, 3, 4};
    // auto itr = l1.begin();
    // l1.end() - iterator pointing to the memory location after 4
    // cout << *itr << endl;

    // auto rev_itr = l1.rbegin();
    // cout<<*rev_itr<<endl;
    // l1.end() - iterator  poiting to the memory location after 1

    // advance(itr, 2);
    // cout << *itr << endl;

    // using range-based loop
    // for(auto num:l1)
    // {
    //     cout<<num<<endl;
    // }

    // using iterators
    for (auto itr = l1.begin(); itr != l1.end(); itr++)
    {
        cout << *itr << " ";
    }
    cout << endl;

    // reverse traversal
    // for(auto itr = l1.rbegin(); itr != l1.rend(); itr++)
    // {
    //     cout<<*itr<<" ";
    // }
    // cout<<endl;

    // inserting elements
    auto itr = l1.begin();
    advance(itr, 2);
    //l1.insert(itr, 3, 5);
    auto l = l1.begin();
    auto r = l1.begin();
    advance(r, 2); // now r is pointing to 3
    l1.insert(itr,l,r);
    for (auto itr = l1.begin(); itr != l1.end(); itr++)
    {
        cout << *itr << " ";
    }
    cout << endl;

    // 1 2 1 2 3 4
    auto s_itr = l1.begin();
    advance(s_itr, 2); // s_itr is pointing to 3rd element
    auto e_itr = l1.begin();
    advance(e_itr, 4); // e_itr is pointing to 5th element
    l1.erase(s_itr,e_itr);
    for (auto itr = l1.begin(); itr != l1.end(); itr++)
    {
        cout << *itr << " ";
    }
    cout << endl;
    return 0;
}