#include<iostream>
#include<map>
using namespace std;
int main()
{
    multimap<string,int > directory;
    directory.insert(make_pair("Subhahshis",6665456458));
    directory.insert(make_pair("Nabin",666545645));
    directory.insert(make_pair("Manjuri",6545645));

    for(auto pair:directory)
    {
        cout<<"Name - "<<pair.first<<endl;
        cout<<"Phone No- "<<pair.second<<endl;
    }
    return 0;
}