#include <iostream>
#include <set>
using namespace std;
int main()
{
    set<int> set1;
    set1.insert(3);
    set1.insert(2);
    set1.insert(1);
    set1.insert(4);
    set1.insert(5);

    cout << set1.size() << endl;

    set1.insert(3);
    cout << set1.size() << endl;
    // size remain same because duplicate value is added
    // and sets contain only unique values

    //set<int>::iterator itr;
    // for (itr = set1.begin(); itr != set1.end(); itr++)
    // {
    //     cout << *itr << " ";
    // }
    // cout<<endl;

    for (auto value : set1)
    {
        cout << value << " ";
    }
    cout << endl;

    // deletion of elements
    //set1.erase(4);
    // auto itr = set1.begin();
    // advance(itr,3);
    // set1.erase(itr);

    auto start_itr = set1.begin();
    start_itr++;

    auto end_itr = set1.begin();
    advance(end_itr, 3);

    // set1.erase(start_itr, end_itr);

    // for (auto value : set1)
    // {
    //     cout << value << " ";
    // }
    // cout << endl;

    // searching operation
    if(set1.find(7)!=set1.end()){
        cout<<"Value is present"<<endl;
    }
    else{
        cout<<"Value is not present"<<endl;
    }

    
    return 0;
}