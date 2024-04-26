#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

bool checkNoOneToManyMappings(string s1, string s2)
{
    unordered_map<char, char> m;
    for (int i = 0; i < s1.length(); i++)
    {
        if (m.find(s1[i]) != m.end())
        {
            if (m[s1[i]] != s2[i])
            {
                return false;
            }
        }
        else
        {
            m[s1[i]] = s2[i];
        }
    }
    return true;
}
bool isIsomorphic(string s1, string s2)
{

    if (s1.length() != s2.length())
    {
        return false;
    }
    
    bool s1s2 = checkNoOneToManyMappings(s1, s2);

    bool s2s1 = checkNoOneToManyMappings(s2, s1);

    return s1s2 && s2s1;
    
}
int main()
{
    string s1, s2;
    cin >> s1 >> s2;

    cout << (isIsomorphic(s1, s2) ? "Isomorphic" : "Not Isomorphic") << endl;
    return 0;
}