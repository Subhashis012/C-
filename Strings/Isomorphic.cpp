#include<iostream>
#include<string>
#include<vector>
using namespace std;
bool isIsomorphic(string s1,string s2)
{
    vector<int> v1(128,-1);
    vector<int> v2(128,-1);
    if(s1.size()!=s2.size()) 
    {
        return false;
    }
    for(int i=0;i<s1.size();i++)
    {
        if(v1[s1[i]]!=v2[s2[i]]) // checking if value of character at idx i match in  both vectors
        {
            return false;
        }
        v1[s1[i]]=v2[s2[i]]=i; // stroring string positon in vectors for character at index i
    }
    return true;
}
int main()
{
    string s1,s2;
    cout<<"Enter first string: ";
    cin>>s1;
    cout<<"Enter second string: ";
    cin>>s2;
    if(isIsomorphic(s1,s2))
    {
        cout<<"Strings are isomorphic."<<endl;
    }
    else
    {
        cout<<"Strings are not isomorphic."<<endl;
    }
    return 0;
}