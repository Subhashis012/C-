#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main()
{

    int n;
    cin >> n;

    vector<int> input(n);

    for (int i = 0; i < n; i++)
    {
        cin >> input[i];
    }

    map<int,int> m;
    for(int i=0;i<n;i++)
    {
        m[input[i]]++;
    }

    int sum =0;
    for(auto pair:m)
    {
        if(pair.second>1)
        {
            sum+=pair.first;
        }
    }

    cout<<"Sum is: "<<sum;
    return 0;
}