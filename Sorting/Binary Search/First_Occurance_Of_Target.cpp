#include <iostream>
#include <vector>
using namespace std;
int firstOccurance(vector<int> &input, int target)
{
    /**
     * Time Complexity: O(log n)
     * Space Complexity: O(1)
     */
    int lo = 0;
    int hi = input.size() - 1;
    int ans = -1;
    while (lo <= hi)
    {
        int mid = lo + (hi - lo) / 2;
        if (input[mid] == target)
        {
            ans = mid;
            hi = mid - 1;
        }
        else if (input[mid] < target)
        {
            lo = mid + 1;
        }
        else
        {
            hi = mid - 1;
        }
    }
    return ans;
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
    cout << firstOccurance(input, target);
    return 0;
}