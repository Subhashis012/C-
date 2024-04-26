#include <iostream>
#include <vector>
using namespace std;
void SelectionSort(vector<int> &v)
{
    for (int i = 0; i < v.size() - 1; i++)
    {
        // finding min element in unsorted array
        int min_index = i;
        for (int j = i + 1; j < v.size(); j++)
        {
            if (v[j] < v[min_index])
            {
                min_index = j;
            }
        }
        // placing min element at begining
        if (i != min_index)
            swap(v[i], v[min_index]);
    }
    return;
}
int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    vector<int> v(n);
    cout << "Enter the elements of array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    SelectionSort(v);
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    return 0;
}