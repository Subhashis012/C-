#include <iostream>
#include <vector>
using namespace std;
int peakInMountaininArray(vector<int> &input)
{
    int lo = 1, hi = input.size() - 1;
    int ans = -1;
    while (lo <= hi)
    {
        int mid = lo + (hi - lo) / 2;
        if (input[mid] > input[mid - 1])
        {
            // increase caase
            ans = max(ans, mid);
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
    vector<int> input;
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    cout << "Enter the elements of array: ";
    for (int i = 0; i < n; i++)
    {
        int ele;
        cin >> ele;
        input.push_back(ele);
    }
    cout << peakInMountaininArray(input);
    return 0;
}