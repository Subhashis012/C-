#include <iostream>
#include <vector>
using namespace std;
int binarySearch(vector<int> &input, int target)
{
    /**
    * Time Complexity: O(log n)
    * Space Complexity: O(1)
   */
    // define search space
    int lo = 0;                // start of the search space
    int hi = input.size() - 1; // end of the search space
    while (lo <= hi)
    {
        // calculate mid point for the search space
        int mid = lo + (hi - lo) / 2; // modified mid to tackle overflow
        if (input[mid] == target)
            return mid;
        else if (input[mid] < target)
        {
            // discard the left of mid
            lo = mid + 1;
        }
        else
        {
            // discard the right of mid
            hi = mid - 1;
        }
    }
    return -1;
}
int binarySearchRecursive(vector<int> &input, int target, int lo, int hi)
{ /**
    * Time Complexity: O(log n)
    * Space Complexity: O(log n)
   */
    if (lo > hi)
        return -1;
    int mid = lo + (hi - lo) / 2;
    if (input[mid] == target)
        return mid;
    if (input[mid] < target)
        return binarySearchRecursive(input, target, mid + 1, hi);
    else
        return binarySearchRecursive(input, target, lo, mid - 1);
}
int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    vector<int> input;
    cout << "Enter the elements of array: ";
    for (int i = 0; i < n; i++)
    {
        int ele;
        cin >> ele;
        input.push_back(ele);
    }
    int target;
    cout << "Enter the target: ";
    cin >> target;
    // cout << binarySearch(input, target);
    cout << binarySearchRecursive(input, target, 0, n - 1);
    return 0;
}