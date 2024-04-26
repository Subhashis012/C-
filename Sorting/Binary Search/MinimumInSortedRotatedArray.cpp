#include <iostream>
#include <vector>
using namespace std;
int findMInimumSortedRotatedArray(vector<int> &input)
{
    /**
     * Time Complexity: O(log n)
     * Space Complexity: O(1)
    */
    if (input.size() == 1)
        return input[0];
    int lo = 0, hi = input.size() - 1;
    if (input[lo] < input[hi]) // sorted array
        return input[lo];
    while (lo <= hi) // sorted rotated array
    {
        int mid = lo + (hi - lo) / 2;
        if (input[mid] > input[mid + 1])
            return mid + 1;
        if (input[mid] < input[mid-1])
            return mid;
        if (input[mid] > input[lo])
            lo = mid + 1;
        else
            hi = mid - 1;
    }
    return -1;
}
int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    vector<int> input;
    for (int i = 0; i < n; i++)
    {
        int ele;
        cin >> ele;
        input.push_back(ele);
    }
    cout << findMInimumSortedRotatedArray(input);
    return 0;
}