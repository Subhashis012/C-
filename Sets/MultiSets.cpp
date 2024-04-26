#include<iostream>
#include<set>
using namespace std;
int main()
{
    multiset<int> ms;  // -> for ascending order
    //multiset<int,greater<int>> ms;  -> for descending order
    ms.insert(4);
    ms.insert(8);
    ms.insert(3);
    ms.insert(1);
    ms.insert(4);

    for(auto value:ms)
    {
        cout<<value<<endl;
    }
    cout<<endl;
    return 0;
}