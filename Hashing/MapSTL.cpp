#include <iostream>
#include <map>
using namespace std;
int main()
{

    map<string, int> directory;
    // map<string,int,greater<string>> directory;
    directory["naman"] = 3876;
    directory["karan"] = 3877;
    directory["animesh"] = 3878;

    for (auto ele : directory)
    {
        cout << "Name - " << ele.first << endl;
        cout << "Ph. No - " << ele.second << endl;
    }

    // directory["animesh"] = 89563;
    // for(auto ele:directory)
    // {
    //     cout<<"Name - "<<ele.first<<endl;
    //     cout<<"Ph. No - "<<ele.second<<endl;
    // }

    map<string, int>::reverse_iterator itr;
    for (itr = directory.rbegin(); itr != directory.rend(); itr++)
    {
        cout << itr->first << "- " << itr->second << endl;
    }

    return 0;
}