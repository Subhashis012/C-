#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
using namespace std;

class Hashing
{
    vector<list<int>> hashtable;
    int buckets;

public:
    Hashing(int size)
    {
        buckets = size;
        hashtable.resize(size);
    }

    int hashValue(int key)
    {
        return key % buckets; // division method
    }

    void addKey(int key)
    {
        int idx = hashValue(key);
        hashtable[idx].push_back(key);
    }

    list<int>::iterator searchKey(int key)
    {
        int idx = hashValue(key);
        return find(hashtable[idx].begin(), hashtable[idx].end(), key);
    }

    void deletekey(int key)
    {
        int idx = hashValue(key);
        if (searchKey(key) != hashtable[idx].end()) // key is present
        {
            hashtable[idx].erase(searchKey(key));
            cout << "Key is deleted: " << key << endl;
        }
        else
        {
            cout << "Key is not present" << endl;
        }
    }
};
int main()
{
    Hashing h(10);
    h.addKey(5);
    h.addKey(9);
    h.addKey(3);

    h.deletekey(3);

    return 0;
}