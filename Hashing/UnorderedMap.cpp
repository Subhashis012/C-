#include<iostream>
#include<unordered_map>
using namespace std;
int main()
{
    unordered_map<int,string> record;

    record.insert(make_pair(3,"ria"));
    record[1] = "bali";
    record[2] = "animesh";
    for(auto pair: record)
    {
        cout<<"Roll no - "<<pair.first<<endl;
        cout<<"Name - "<<pair.second<<endl;
    }
    return 0;
}